#ifndef _PRINTING_MENU_H_
#define _PRINTING_MENU_H_

#ifdef __cplusplus
extern "C" {
#endif

// start print originated or handled by remote host
// (e.g. print started from remote onboard media or hosted by remote host) and open Printing menu
void startRemotePrint(const char * filename);

// start print originated or handled by TFT
// (e.g. print started from TFT's GUI or hosted by TFT) and open Printing menu
void printStart(void);

void printSummaryPopup(void);
void menuPrinting(void);

#ifdef __cplusplus
}
#endif

#endif
