#include<stdio.h>
#include<unistd.h>

#include"medisession.h"

const char *DATA_PATH = "cmeditate_data.csv";

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

  FILE *filePointer = fopen(DATA_PATH, "a");

  if(filePointer == NULL){
    printf("Could not open data store %s", DATA_PATH);
  }
  fprintf(filePointer, "2020-01-01;%d;%s\n", nMinutes, "C-meditate cli");
  fclose(filePointer);
  return(0);
};
