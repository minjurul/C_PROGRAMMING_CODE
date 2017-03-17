#include <stdio.h>

int main()
{
    int a,b,c,d,e,sum;
    float ave;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    ave=sum/5;
    printf("%.2f\n",ave);
    return 0;
}
