#include <stdio.h>
int main()
{
    int a=10; 
    int     b=20;
    if(!(a>0 && b>0))
    {
        printf("both values are greather than 0\n");
    }
    else
    {
        printf("both values are less than 0\n");

    }
    return 0;
}