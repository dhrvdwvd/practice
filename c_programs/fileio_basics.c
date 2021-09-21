#include<stdio.h>

/************************************************
*  This program demonstrates the basics of fi-  *
*  le io.  FILE is a structure that needs to    *
*  be created for accessing a file.  FILE str-  *
*  ucture is a pointer.                         *
*                                               *
*  Modes:                                       *
*  "r" for reading text files, "rb" for readi-  *
*  ng binary files.                             *
*                                               *
*  If file does not exist, fopen() returns      *
*  NULL.                                        *
*                                               *
*  "w" and "wb" is for writing.  Here, files    *
*  are overwritten.  Be cautious!               *
*                                               *
*  "a" appends text to the end of the file. If  *
*  file does not exist, it will be created.     *
************************************************/

int main() {
  
  FILE* ptr;
  ptr = fopen("sample.txt","r");
  return 0;

}