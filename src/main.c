#include<stdio.h>
#include<unistd.h>

#include"medisession.h"

/**
 * cMindful
 * A small cli tool for a developer to set some time off.
 *
 * @author perhenk
 ***/
int main(int argc, char **argv){

  if(argc == 1){
    printf("You have to provide how many minutes you want to meditate!\n");
    return 1;
  }

  // Parse first argument  
  int nMinutes;
  if (sscanf (argv[1], "%i", &nMinutes) != 1) {
    fprintf(stderr, "Error minutes is not an integer!\n");
  }

  MediSession ms = createMediSession(nMinutes);
  
  printf("Starting to meditate for %d minutes!\n", nMinutes);
  sleep(nMinutes);

  printMediSession(&ms);
  printf("Meditation finished.\n\a");
  return(0);
};
