#include <stdio.h>
int main()
{
    float a,b,h;
    float area;
    printf("enter the area for the area and base and height for the trapezium\n:");
    scanf("%f%f%f",&a,&b, &h);
    area = 0.5 * (a + b) * h ;
    printf("Area of the trapezium is: %.3f", area);
    return 0;
} 

