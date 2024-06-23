#include<stdio.h>
#include<string.h>

// Copies string from src to dst
void copy(char* dst, char* src){
  while (*src != '\0') { // Loop until end of src string
    *dst = *src; // Dereference src, and copy its content into dereferenced dst
    src++; 
    dst++;
  }
  *dst = '\0'; // Null-terminate the destination string
}
 
int main(){
  char srcString[] = "This string has been successfully copied!";
  char dstString[strlen(srcString)]; // Allocate memory for destination string
  copy(dstString, srcString);

  printf("%s",dstString); // Print the copied string
}
