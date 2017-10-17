//Created by Nabeel Younis <nyounis@bu.edu> on 08/10/2017
//log file header function used to log certain activity of Bitcoin Core
#ifndef LOGFILE_H
#define LOGFILE_H

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include "blockencodings.h"

using namespace std;



string createTimeStamp();
void logFile(string info, string fileName = ""); //logging a simple statement with timestamp
int logFile(CBlockHeaderAndShortTxIDs &Cblock, string fileName = "");//info from cmpctBlock
void logFile(BlockTransactionsRequest &req, int inc, string fileName = ""); //info from getblocktxn


#endif
