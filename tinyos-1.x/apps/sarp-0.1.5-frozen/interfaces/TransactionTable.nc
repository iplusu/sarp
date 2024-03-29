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
  command result_t initializeTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t originatingNode, uint16_t receivedFrom, Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint16_t myLevel, uint16_t isSource);


  /*
   *    This command 
   */
  command uint8_t transactionExistsAlready(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t myAddr);

  /*
   *    This command 
   */
   command Transaction_Record_Ptr getThisTransactionPtr(Transaction_Record_t transactions[], uint32_t transaction_id);

  /*
   *    This command 
   */
   command void processThisTransaction(Transaction_Record_Ptr thisTransaction, Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors);

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
}

