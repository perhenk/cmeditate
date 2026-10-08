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

  char dato[11];  // "YYYY-MM-DD" + '\0'
  
  if (strftime(dato, sizeof dato, "%Y-%m-%d", lokal_tid) == 0) {
    printf("Can not parse date format!");
  }

  
  MediSession ms = {.id = 1, .date = *dato, .minutes = minutes};
  return ms;
}  


void printMediSession(MediSession *md){
  printf("Date %s meditated for %d minutes at date %s\n", md->date, md->minutes, md->date);
}
