//
//  main.c -- Created by adrielmorales.
//  Commited by... {adrielmorales,}
//
//  Saturday July 24, 2021.
//

#include <stdio.h>
#include <string.h>
#include "src/functions.h"

  int main(){
    FILE *fp;
    printf("WARNING! It is reccommended to format your drive to NTFS for the fastests r/w speeds.\n Make sure you format your drive to test its capacity.\n");
    char osChooser[8];
    char letter = 'E';
    char path[300];
    char drivePath[100];
    printf("Lua\n");
    printf("Type in (Windows) or (NIX) to corelate with your specific OS.");
    scanf("%s", &osChooser);
    printf("%s\n", osChooser);
    if(osChooser[0] == 'W'){
      printf("Enter the letter for your Drive.");
      scanf("%c", &letter);
      printf("%c", letter);
      path == drivePatternWindows(letter);
      fp = fopen(path, "a+");
    }
    else{
      printf("Enter the Drive Path for your *NIX based system.");
      fgets(drivePath, 100, stdin);
      drivePath[strlen(drivePath) - 1] = 0;
      printf("%s\n", drivePath);
      path == drivePatternUnix(drivePath);
      fp = fopen(path, "a+");
    }
    fclose(fp);
    return 0;
  }
