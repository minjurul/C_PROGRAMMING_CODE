#include<stdio.h>
int swap (int *a,int *b);

int main()
{
    int n1,n2;
    printf("input first number:");
    scanf("%d",&n1);
    printf("input second number:");
    scanf("%d",n2);
    swap(&n1,&n2);
    printf("After swapping\nfirst number:%d \n second number:%d",n1,n2);
}
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
