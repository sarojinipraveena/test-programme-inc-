#include <stdio.h>
int area(int l,int b);
int main()
{
    int l;
    printf("enter the l:\n");
    scanf("%d",&l);
    int b;
    printf("enter the b:\n");
    scanf("%d",&b);
    printf("area of rectangle in%d\n",area(l,b));
}
int area(int l, int b)
{
    return(l*b);
}