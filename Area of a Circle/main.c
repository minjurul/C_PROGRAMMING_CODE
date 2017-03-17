#include<stdio.h>
#define pi 3.14
int main()
{
    int r;
    float area,circum;
    printf("input the radius of Circle:");
    scanf("%d",&r);
    area=pi*r*r;
    circum=2*pi*r;
    printf("area of the circle:%f\n",area);
    printf("circumference of  the circle:%f",circum);
    return 0;

}
