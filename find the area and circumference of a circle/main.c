#include<stdio.h>
int main()
{
    float r,area,circum,pi=3.14;

    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    area=pi*r*r;
    circum=2*pi*r;
    printf("Area of the circle:%.2f\n",area);
    printf("Circumference of the area:%.2f",circum);
    return 0;
}
