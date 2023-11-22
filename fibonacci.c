/*fibanocci series:The Fibonacci series is the sequence where each number is the sum of the previous two 
numbers of the sequence.*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter n value:");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<n;i++)
    {
        //fibonacci series formula
       fib[i]=fib[i-1]+fib[i-2];
       printf("%d\n",fib[i]);
    }
    printf("\n");
    return 0;
}
 
