/*Swapping two numbers means exchanging their values
We swap two numbers by storing the value of one number in a temporary variable, 
assigning the value of the second number to the first number, 
and then assigning the value stored in the temporary variable to the second number*/
#include <stdio.h>
int main()
{
   int n,i,a[10],b[10];
   printf("enter the array of n\n");
   scanf("%d",&n);
   printf("first aray:\n");
   for(i=0;i<n;i++) 
   {
    scanf("%d",a[i]);
   }
   printf("enter the secound array element:\n");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
    a[i]=a[i]+b[i];
    b[i]=a[i]-b[i];
    a[i]=a[i]-b[i];
   }
   printf("array after swapping %delements \n",n);
   for(i=0;i<n;i++)
   {
    printf("%d",b[i]);

   }
   return 0;
}