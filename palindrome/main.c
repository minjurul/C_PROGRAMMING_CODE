#include <stdio.h>
int main()
{
    int n,temp,z=0,r;
    printf("How many case:");
    scanf("%d",&n);
     temp=n;
    while(temp>0)
    {
        r=temp%10;
        temp=temp/10;
        z=(z*10)+r;
    }
    if(n==z)
    {
        printf("case %d:Yes",n);
    }
    else
    {
        printf("case %d:Not",n);
    }
    return 0;
}
