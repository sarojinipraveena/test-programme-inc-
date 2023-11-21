/*to find the simple interest formula we use
p-principal
r=rate
t=time
si formula:
simple interst=principal*rate*time\100*/

#include <stdio.h>
int main()
{
    //variable declaration
    int principal,rate,time,SI;
    printf("enter the principal\n");
    scanf("%d",&principal);
    printf("enter the rate\n");
    scanf("%d",&rate);
    printf("enter the time\n");
    scanf("%d",&time);
    SI=principal*rate*time/100;
    printf("the simple interest is%d\n",&SI);
    return 0;
}