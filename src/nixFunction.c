//
//  nixFunction.c -- Created by adrielmorales.
//  Commited by... {adrielmorales,}
//
//  Wednesday July 28, 2021.
//
#include <stdio.h>
#include <string.h>
#include "functions.h"

char drivePatternUnix(char text[200]){
  char path[12] = {text, '/', 't', 'e', 's', 't', '.', 't', 'x', 't', NULL};
  return path;
}