#include <stdio.h>
#include<time.h>
#include"medisession.h"


MediSession createMediSession(int minutes) {

  // Get todays date
  time_t nå = time(NULL);
  struct tm *lokal_tid = localtime(&nå);

  if (lokal_tid == NULL) {
    printf("Error in lokal tid!");
  }

  MediSession ms = {.id = 1, .minutes = minutes};  
  if (strftime(ms.date, sizeof ms.date, "%Y-%m-%d", lokal_tid) == 0) {
    printf("Can not parse date format!");
  }
  return ms;
}  


void printMediSession(MediSession *md){
  printf("Date %s meditated for %d minutes at date %s\n", md->date, md->minutes, md->date);
}
