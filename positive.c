// c program to print integer data types
#include <stdio.h>
int main()
{ 
  // integer value with positive data
  int a=14;
  //  integer value with  negiitve data
  int b=-14;
  // U or u is used for unsigned  int in c
  int c=90U;
  // L orl is used for long long int
  long int d=99998L;
  printf("integer with positie value : %d\n",a);
  printf("integer with negitive value: %d\n",b);
  printf("integer with unsigned int value: %u\n",c);
  printf("integer with an long int value: %ld\n",d);
  return 0;
}