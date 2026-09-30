
#include"medisession.h"

MediSession createMediSession(int minutes) {
  MediSession ms = {.id = 1, .date = "2021-01-01", .minutes = minutes};
  return ms;
}  
