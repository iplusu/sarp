/*
 * "Copyright (c) 2000-2003 The Regents of the University  of California.  
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY OF
 * CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 * Copyright (c) 2002-2003 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */


package net.tinyos.task.taskviz;

import javax.swing.*;
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.image.*;

import edu.umd.cs.jazz.*;
import edu.umd.cs.jazz.component.*;
import edu.umd.cs.jazz.event.*;
import edu.umd.cs.jazz.util.*;

/**
 * This class is a Jazz event handler for dealing with motes being added to a visual element.
 */
public class AddEventHandler extends ZMouseAdapter implements ZEventHandler {

  /**
   * MIN mode
   */
  public static final String MIN = "min";

  /**
   * MAX mode
   */
  public static final String MAX = "max";

  private ZCanvas canvas;
  private ZNode node;
  private ZLayerGroup layer;
  private boolean active;
  private Point pt;
  private ZVisualLeaf minLeaf, maxLeaf, leaf;
  private AddEventListener listener;
  private ChangeListener cListener;
  private int imageWidth;
  private int imageHeight;
  private int id = Mote.INVALID_ID;
  private Motes motes;
  private Frame frame;

  /**
   * Simple constructor that stores incoming parameters. Call this constructor when you want to
   * be notified about changes in the motes object.
   *
   * @param canvas The canvas to add motes onto
   * @param listener The object that is listening for add events
   * @param cListener The object that is listening for changes
   * @param imageWidth The width of the underlying image being rendered on the canvas
   * @param imageHeight The height of the underlying image being rendered on the canvas
   * @param motes The collection of motes being added to and manipulated
   * @param frame The frame the canvas is being rendered on
   */
  public AddEventHandler(ZCanvas canvas, AddEventListener listener, ChangeListener cListener, int imageWidth, int imageHeight, Motes motes, Frame frame) {	
    this(canvas, listener, imageWidth, imageHeight);
    this.motes = motes;
    this.frame = frame;
    this.cListener = cListener;
  }

  /**
   * Simple constructor that stores incoming parameters.
   *
   * @param canvas The canvas to add motes onto
   * @param listener The object that is listening for add events
   * @param imageWidth The width of the underlying image being rendered on the canvas
   * @param imageHeight The height of the underlying image being rendered on the canvas
   */
  public AddEventHandler(ZCanvas canvas, AddEventListener listener, int imageWidth, int imageHeight) {	
    this.canvas = canvas;
    this.listener = listener;
    this.imageWidth = imageWidth;
    this.imageHeight = imageHeight;
    node = canvas.getCameraNode();
    layer = canvas.getLayer();
    pt = new Point();	
    active = false;
  }

  /**
   * Returns whether this event handler is active or not
   *
   * @return whether this event handler is active or not
   */
  public boolean isActive() {
    return active;
  }

  /**
   * On a MousePressed Event, a mote is added to the canvas. If the listener's info is MIN, a green mote 
   * is added to the canvas. If the listener's info is MAX, a red mote is added to the canvas. Otherwise,
   * a regular mote is added and a dialog box appears allowing the user to enter an id for the mote.
   *
   * @param me The incoming ZMouseEvent: mousePress
   */
  public void mousePressed(ZMouseEvent me) {
    if ((me.getModifiers() & MouseEvent.BUTTON1_MASK) == MouseEvent.BUTTON1_MASK) {
      ZSceneGraphPath path = me.getPath();
      ZCamera camera = path.getTopCamera();
      pt.setLocation(me.getX(), me.getY());
      path.screenToGlobal(pt);

      double x = pt.getX();
      double y = pt.getY();

      // make the point fit within the image
      if (x < 0) {
        x = 0;
      }
      else if (x >= imageWidth) {
        x = (imageWidth-1);
      }
      if (y < 0) {
        y = 0;
      }
      else if (y >= imageHeight) {
        y = (imageHeight-1);
      }

      ZEllipse ellipse = new ZEllipse(x-(Mote.NODE_SIZE/2.0), y-(Mote.NODE_SIZE/2.0), Mote.NODE_SIZE, Mote.NODE_SIZE);
      ellipse.setPenWidth(Mote.PEN_WIDTH);

      // get the listener's info
      String info = listener.getInfo().toString();

      // if MIN, remove the old MIN mote and draw a new green one
      if (info.equals(MIN)) {
        if (minLeaf != null) {
          layer.removeChild(minLeaf);
        }
        ellipse.setFillPaint(Color.green);
        minLeaf = new ZVisualLeaf(ellipse);
        layer.addChild(minLeaf);
        listener.setPixelX((int)x);
        listener.setPixelY((int)y);
      }
      // if MAX, remove the old MAX mote and draw a new red one
      else if (info.equals(MAX)) {
        if (maxLeaf != null) {
          layer.removeChild(maxLeaf);
        }
        ellipse.setFillPaint(Color.red);
        maxLeaf = new ZVisualLeaf(ellipse);
        layer.addChild(maxLeaf);
        listener.setPixelX((int)x);
        listener.setPixelY((int)y);
      }
      // if not MIN or MAX
      else {
        // create a new mote
        Mote mote = new Mote(x,y);
        mote.setPenWidth(Mote.PEN_WIDTH);
        mote.setFillPaint(Mote.FILL_COLOR);
        leaf = new ZVisualLeaf(mote);
        layer.addChild(leaf);
        listener.setPixelX((int)x);
        listener.setPixelY((int)y);

        // pop up dialog box asking for id
        EditIdDialog eDialog = new EditIdDialog(frame, motes, Mote.INVALID_ID, EditIdDialog.ADD);
        eDialog.pack();
        eDialog.setLocationRelativeTo(frame);
        eDialog.setVisible(true);
        // if id is valid, add to motes object and notify the ChangeListener
        if (eDialog.isDataValid()) {
          mote.setId(eDialog.getId());
          motes.addMote(mote);
          cListener.changed();
        }
        else {
          layer.removeChild(leaf);
        }
      }
    }
  }

  public void setMin(double x, double y) {
    ZEllipse ellipse = new ZEllipse(x-(Mote.NODE_SIZE/2.0), y-(Mote.NODE_SIZE/2.0), Mote.NODE_SIZE, Mote.NODE_SIZE);
    ellipse.setPenWidth(Mote.PEN_WIDTH);
    ellipse.setFillPaint(Color.green);
    minLeaf = new ZVisualLeaf(ellipse);
    layer.addChild(minLeaf);
  }

  public void setMax(double x, double y) {
    ZEllipse ellipse = new ZEllipse(x-(Mote.NODE_SIZE/2.0), y-(Mote.NODE_SIZE/2.0), Mote.NODE_SIZE, Mote.NODE_SIZE);
    ellipse.setPenWidth(Mote.PEN_WIDTH);
    ellipse.setFillPaint(Color.red);
    maxLeaf = new ZVisualLeaf(ellipse);
    layer.addChild(maxLeaf);
  }

  /**
   * This method sets whether the event handler is active or not.
   *
   * @param active Boolean indicating whether to set the event handler to active or inactive.
   */
  public void setActive(boolean active) {
    if (this.active && !active) {
      this.active = false;
      node.removeMouseListener(this);
    }
    else if (!this.active && active) {
      this.active = true;
      node.addMouseListener(this);
    }
  }
}
