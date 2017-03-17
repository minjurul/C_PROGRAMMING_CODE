#include <stdio.h>
int main()
{
    int x;
    int sum;
    printf("result of 3x^3+5x^2+6\n");
    printf("input the value of X:");
    scanf("%d",&x);
    sum=3*x*x*x+5*x*x+6;
    printf("3x^3+5x^2+6=%d",sum);
    return 0;
}
