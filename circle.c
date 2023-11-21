/*using diameter of circle using float given user input the output will be float value */

#include <stdio.h>
int main()
{
    //declaring variable 
    float pie=3.14;
    int radius;
    //user input 
    printf("enter the radius of circle\n:");
    scanf("%d",&radius);
    printf("the radius of the circle is %d\n",radius);
    //formula for area of given circle 
   float area=(float)(pie*radius*radius);
    printf("area of given circle is %f",area);
    return 0;
}