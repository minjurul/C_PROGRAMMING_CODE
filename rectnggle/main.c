#include<stdio.h>
int main()
{
    int height,width;
    float area,circum;
    printf("Enter  rectangle height:");
    scanf("%d",&height);
    printf("Enter rectangle width:");
    scanf("%d",&width);
    area=height*width;
    circum=2*height*width;
    printf(" Area of a rectangle:%f\ncircumference of a rectangle:%f",area,circum);
    return 0;

}
