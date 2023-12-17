#include <stdio.h> 

int main() { 
  int found = 2015, curr = 2020; 
  float num = 19.99;
  int onum = 31;
  int c = 28; 
/*
%d and %i decimal integer format specifiers:
*/
  printf("%d\n", found); 
  printf("%i\n", curr); 
/*
%f and %e floating point number format specifiers:
*/
  printf("%f\n", num); 
  printf("%e\n", num);
/*
%o octal integer format specifier:
*/
printf("%o\n", num); 
/*
%x hexadecimal integer format specifier:
*/
  printf("%x\n", c); 
  return 0; 
} 

