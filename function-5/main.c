#include<stdio.h>
#include<math.h>
int fact(int y)
{
    if(y==0)
    return 1;
    else
    return y*fact(y-1);
}
float f(float x, float n)
{
    int i,j=0,s=-1;
    float sum=0.0;
    for(i=1;i<=n;i+=2)
    {
        sum=sum+(pow(s,j)*pow(x,i))/fact(i);
        j++;
    }
    return sum;
}
int main()
{
    int x,n;
    printf("Enter the x and n :");
    scanf("%d %d", &x, &n);
    printf("\nResult of this function:%.2f", f(x,n));
    return 0;
}
