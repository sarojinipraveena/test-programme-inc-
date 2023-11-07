#include <stdio.h>
#define p 2
int parameter(int l,int b);
int  main()
{
    int l;
    printf("enter the l:\n");
    scanf("%d",&l);
    int b;
    printf("enter the b:\n");
    scanf("%d",&b);
    printf("perimeter of rectangle in %d\n ",perimeter(l,b));
}
int perimeter(int l,int b)
{
    return(p*(l+b));
}