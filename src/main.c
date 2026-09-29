#include<stdio.h>


int main(int argc, char **argv){

  if(argc == 1){
    printf("You have to provide how many minutes you want to meditate!\n");
    return 1;
  }

  int intvar;
  if (sscanf (argv[1], "%i", &intvar) != 1) {
    fprintf(stderr, "Error minutes is not an integer!\n");
  }
  
  return(0);
};
