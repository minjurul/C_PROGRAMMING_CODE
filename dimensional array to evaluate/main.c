#include<stdio.h>
int main()
{
    int i,n;
    float x[99],total=0;
    printf("\nEnter no of elements: ");
    scanf("%d",&n);
    printf("\nEnter element of an array:");
    for(i=1;i<=n;i++)
    {
        scanf("%f",&x[i]);
    }
    for(i=1;i<=n;i++ )
    {
        total=total+x[i]*x[i];
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("X[%d] : %.2f\n",i,x[i]);
    }
    printf("\nTotal: %.2f",total);
    return 0;
}
