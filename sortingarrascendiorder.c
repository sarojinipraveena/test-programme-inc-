/*sorting array in c program algoritm
START.
INITIALIZE arr[] ={5, 2, 8, 7, 1 }.
SET temp =0.
length= sizeof(arr)/sizeof(arr[0])
PRINT "Elements of Original Array"
SET i=0. REPEAT STEP 7 and STEP 8 UNTIL i<length.
PRINT arr[i]
i=i+1.
*/
#include <stdio.h>
int main()
{
    int i,j,temp,n,num[5];
    printf("enter the array elemnts of N\n");
    scanf("%d",&n);
    printf("the array elements of are\n");
    for(i=0;i<n;++i)
    scanf("%d",&num[i]);
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
    {
        if(num[i]>num[j])
      {
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;

      }  
    }
    }
     printf("the number arranged in ascending order given below\n");
     for(i=0;i<n;++i)
     printf("%d",num[i]);
}
