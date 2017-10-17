# logFilesBitcoin
Log files for Bitcoin network monitoring 

The code in this repositry is used to monitor the behaviour of the compact block protcols (cmpctblock/getblocktxn/blocktxn).

The data recorded includes:
A log file of when a compact block is recived, and whether the node fialed or not when building a normal block
Information on how many transactions we are missing if a compact block fails
The hashes included in each compact block recieved
The indicies sent in a getblocktxn message
Event log of what the node is doing when a compact block is recived

To use the logFile system for network communication monitoring:
Add the files to your src directory
Add in #include "logFile.h" in net_processing.h
Add in the function calls in the appropirate places in net_processing.cpp 

Make sure to change the directory of the log files in logFile.cpp in your bitcoin target location similar to:
LINE 28: string directory = "/home/USERNAME/.bitcoin/expLogFiles/";

Rebuild Bitcoin using the normal procedure outline in the README file outline in the Bitcoin documentation
