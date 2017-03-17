#include <stdio.h>
int main()
{
    int g1,f1,r1,c1,g2,f2,r2,c2,lhs,rhs;
    printf("center of the first circle h:");
    scanf("%d",&g1);
    printf("center of the first circle k:");
    scanf("%d",&f1);
    printf("center of the first circle r:");
    scanf("%d",&r1);
    printf("center of the second circle h:");
    scanf("%d",&g2);
    printf("center of the second circle k:");
    scanf("%d",&f2);
    printf("center of the second circle r:");
    scanf("%d",&r2);
    r1=r1*r1;
    c1=g1*g1+f1*f1;
    c1-=r1;
    r2=r2*r2;
    c2=g2*g2+f2*f2;
    c2-=r2;
    lhs=2*g1*g2+2*f1*f2;
    rhs=c1+c2;
    if(lhs==rhs)
    {
        printf("\n\tThis two circle are orthogonal circle");
    }
    else
    {
        printf("\n\tThis two circle are not orthogonal circle");

    }
    return 0;

}
