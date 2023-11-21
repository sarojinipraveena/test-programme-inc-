/*Array in C is one of the most used data structures in C programming. It is a simple and fast way of storing 
multiple values under a single name.
data_type array_name [size];
         or
data_type array_name [size1] [size2]...[sizeN];
 */
#include <stdio.h>
int main()
{
    //declaring variables
   int num[] = {50,34,89,70,433};
   num[0] = 30;
   printf("the output will be %d",num[0]);
   return 0; 
}