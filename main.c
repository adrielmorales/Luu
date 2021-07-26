//
//  main.c -- Created by adrielmorales.
//  Commited by... {adrielmorales,}
//
//  Saturday July 24, 2021.
//

#include <stdio.h>
#include <string.h>
#include "src/function.h"

  int main(){
    char startScreen[2000] = {'L', 'u', 'u', NULL};
    printf("%s", startScreen);
    for(int i=0; i<1997; i++){
      startScreen[i] = '.';
      printf("%c", startScreen[i]);
    }
    return 0;
  }
