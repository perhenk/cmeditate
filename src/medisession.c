#include <stdio.h>
#include"medisession.h"

MediSession createMediSession(int minutes) {
  MediSession ms = {.id = 1, .date = "2021-01-01", .minutes = minutes};
  return ms;
}  


void printMediSession(MediSession *md){
  printf("Date %s meditated for %d minutes.\n", md->date, md->minutes);
}
