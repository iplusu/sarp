// $Id: StandardDialog.java,v 1.2 2003/10/07 21:46:08 idgay Exp $

/*									tab:4
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


/**
 * @author Wei Hong
 */

//*********************************************************************
//*********************************************************************
//This is a dialog class to which only one Active Panel can be added.  
//It also has two buttons: "Apply" and "Cancel"
//*********************************************************************
//Applying will call ApplyChanges() on the ActivePanel and then close the dialog.
//Canceling will just close the dialog.
//*********************************************************************
//To use this dialog, create an activePanel, create a StandardDialog
//call MyDialog.AddActivePanel(myActivePanel); and then call
//     MyDialog.show();
//*********************************************************************
//*********************************************************************
//The end title of the activePanel becomes the title of the dialog
//the modal variable makes the dialog modal or not
//*********************************************************************
//*********************************************************************

package net.tinyos.tinydb.topology.Dialog;

import javax.swing.*;
import java.awt.*;

              
          
public class StandardDialog extends javax.swing.JDialog
{
	ActivePanel activePanel;

	          //----------------------------------------------------------------------
	          //CONSTRUCTORS
	public StandardDialog(Frame parent)
	{
		super(parent);
		
		// This code is automatically generated by Visual Cafe when you add
		// components to the visual environment. It instantiates and initializes
		// the components. To modify the code, only use code syntax that matches
		// what Visual Cafe can generate, or Visual Cafe may be unable to back
		// parse your Java file into its visual environment.
		//{{INIT_CONTROLS
		setDefaultCloseOperation(javax.swing.JFrame.DISPOSE_ON_CLOSE);
		setModal(true);
		setTitle("DialogTitle");
		getContentPane().setLayout(null);
		setSize(405,305);
		setVisible(false);
		ApplyButton.setNextFocusableComponent(CancelButton);
		ApplyButton.setText("Apply");
		ApplyButton.setActionCommand("Apply");
		getContentPane().add(ApplyButton);
		ApplyButton.setBounds(84,264,105,30);
		CancelButton.setText("Cancel");
		CancelButton.setActionCommand("Cancel");
		getContentPane().add(CancelButton);
		CancelButton.setBounds(240,264,102,30);
		//}}
	
		//{{REGISTER_LISTENERS
		SymAction lSymAction = new SymAction();
		ApplyButton.addActionListener(lSymAction);
		CancelButton.addActionListener(lSymAction);
		//}}
	}

	public StandardDialog()
	{
		this((Frame)null);
	}

	public StandardDialog(String sTitle)
	{
		this();
		setTitle(sTitle);
	}
	
	public StandardDialog(ActivePanel pPanel)
	{
		this();
		AddActivePanel(pPanel);
	}
	          //CONSTRUCTORS
	          //----------------------------------------------------------------------


	public void setVisible(boolean b)
	{
		if (b)
			setLocation(50, 50);
		super.setVisible(b);
	}
	
	          //--------------------------------------------------------------------
	          //ADD ACTIVE PANEL
	          //this function adds an active panel to the dialog
	public void AddActivePanel(ActivePanel pPanel)
	{
			if( (pPanel == null) ||
				(pPanel.GetCancelInfoDialog() == true))	
			{
				this.dispose();
			}
			activePanel = pPanel;
			setModal(activePanel.GetModal());
			setTitle(activePanel.GetTabTitle());
			activePanel.InitializeDisplayValues();
			Dimension d = activePanel.getSize();
			getContentPane().add(activePanel);
			activePanel.setBounds(0,0,d.width, d.height);
	}
	          //ADD ACTIVE PANEL
	          //--------------------------------------------------------------------
	
	          //--------------------------------------------------------------------
	          //APPLY CHANGES
	          //this function is called when the "OK" button is pushed
	public void ApplyChanges()
	{
			activePanel.ApplyChanges();
	}
	          //APPLY CHANGES
	          //--------------------------------------------------------------------

	
	public void addNotify()
	{
		// Record the size of the window prior to calling parents addNotify.
		Dimension size = getSize();

		super.addNotify();

		if (frameSizeAdjusted)
			return;
		frameSizeAdjusted = true;

		// Adjust size of frame according to the insets
		Insets insets = getInsets();
		setSize(insets.left + insets.right + size.width, insets.top + insets.bottom + size.height);
	}

	// Used by addNotify
	boolean frameSizeAdjusted = false;

	//{{DECLARE_CONTROLS
	javax.swing.JButton ApplyButton = new javax.swing.JButton();
	javax.swing.JButton CancelButton = new javax.swing.JButton();
	//}}


	class SymAction implements java.awt.event.ActionListener
	{
		public void actionPerformed(java.awt.event.ActionEvent event)
		{
			Object object = event.getSource();
			if (object == ApplyButton)
				ApplyButton_actionPerformed(event);
			else if (object == CancelButton)
				CancelButton_actionPerformed(event);
		}
	}

	void ApplyButton_actionPerformed(java.awt.event.ActionEvent event)
	{         //this is the code that is called when the "OK" button is clicked
		// to do: code goes here.
			 
		ApplyButton_actionPerformed_Interaction1(event);
	}

	void ApplyButton_actionPerformed_Interaction1(java.awt.event.ActionEvent event)
	{         //this is the code that is called when the "OK" button is clicked
		try {
			this.ApplyChanges();
			this.dispose();		
		} catch (java.lang.Exception e) {
		}
	}

	void CancelButton_actionPerformed(java.awt.event.ActionEvent event)
	{         //this is the code that is called when the "OK" button is clicked
		// to do: code goes here.
			 
		CancelButton_actionPerformed_Interaction1(event);
	}

	void CancelButton_actionPerformed_Interaction1(java.awt.event.ActionEvent event)
	{
		try {
			this.dispose();
		} catch (java.lang.Exception e) {
		}
	}
}