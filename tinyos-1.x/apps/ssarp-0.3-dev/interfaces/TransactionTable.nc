/*
 * File:        TransactionTable.nc
 * Author:      Kenneth Rahn Jr
 * Created:     May 16, 2009
 */

includes TransactionTableH;

interface TransactionTable
{

  /*
   *    This command is called when a Data message is either sent by the
   *    data source, or initially received by each node in the route.
   */
  command result_t initializeTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t originatingNode, uint16_t receivedFrom, Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint16_t myLevel, uint16_t isSource, Neighbor_Rec_withTrust_t *myPeers[], uint16_t numPeers, Neighbor_Rec_withTrust_t *myChildren[], uint16_t numChildren, uint16_t myAddr);


  /*
   *    This command 
   */
  command uint8_t transactionExistsAlready(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t myAddr);

  /*
   *    This command 
   */
  command void incrementSequenceNumber(Transaction_Record_t transactionRecords[], uint32_t transaction_id);

  /*
   *    This command 
   */
   command Transaction_Record_Ptr getThisTransactionPtr(Transaction_Record_t transactions[], uint32_t transaction_id);

  /*
   *    This command 
   */
   command void processThisTransaction(Transaction_Record_Ptr thisTransaction, Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors, uint16_t whoIAm);

  /*
   *    This command 
   */
  command uint16_t getTransactionParent(Transaction_Record_t transactions[], uint32_t transaction_id);

  /*
   *    This command 
   */
  command void adjustThisNeighborsFPTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint32_t GFBinc, uint32_t BFBinc);

  /*
   *    This command 
   */
  command void adjustThisNeighborsRHTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint32_t GRBinc, uint32_t BRBinc);

  /*
   *    This command 
   */
  command void adjustThisNeighborsAVTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint32_t GABinc, uint32_t BABinc);

  /*
   *    This command 
   */
  command void adjustThisNeighborsLPTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint32_t GABinc, uint32_t BABinc);

  /*
   *    This command 
   */
  command void markAsLoop( Transaction_Record_Ptr thisTransaction);

  /*
   *    This command 
   */
  command void adjustThisNeighborsOverallTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint16_t whoIAm, uint32_t transactionNumber, uint32_t GFBinc, uint32_t BFBinc, uint32_t GRBinc, uint32_t BRBinc, uint32_t GABinc, uint32_t BABinc, uint32_t GLBinc, uint32_t BLBinc);

  /*
   *    This command 
   */
   command void addToTransactionCheckQ(Check_Transaction_Record_t queue[], Transaction_Record_Ptr ptr, uint16_t ones, uint16_t twos, uint16_t *writeHere, uint16_t maxQueueSize, uint16_t *numInQueue);

  /*
   *    This command 
   */
   command uint16_t  getFromTransactionCheckQ(Check_Transaction_Record_t queue[], Transaction_Record_Ptr *ptr, uint16_t *ones, uint16_t *twos, uint16_t *readHere, uint16_t maxQueueSize, uint16_t *numInQueue);

  /*
   *    This command 
   */
   command void setOriginatorPacketCount(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t packetCount);

  /*
   *    This command 
   */
   command uint16_t sendReportRequestForThisTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, TOS_Msg outQ[], uint16_t *writeOutQHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t myAddr);

  /*
   *    This command 
   */
   command uint16_t isALoop(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t senderNow, uint16_t sequenceNumberIn);

   /*
    *    This command 
    */
   command void doDynamicForgetting(Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors);


}

