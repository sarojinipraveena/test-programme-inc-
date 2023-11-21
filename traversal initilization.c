//c program to demonstrate the use of array
#include <stdio.h>
int main()
{
    //array declaration and array initilization
    int arr[5] = {10, 20, 30, 40, 50};
    //modifiying elements in arr[2]
    arr[1]= 1000;
    //traversal elements using loop
    printf("elements in array:");
    for(int i=0;i<5;i++)
    {
    printf("%d",arr[i]);
     }
 return 0;
}