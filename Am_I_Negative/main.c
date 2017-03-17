#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a>=0.0)
    {
        printf(" %d",a);
    }
    else{
        printf(" %d \n Negative",a);
    }
    return 0;
}
