#include <stdio.h>
int main()
{
    double a,u,t,s;
    scanf("%lf %lf %lf",&u,&a,&t);
    s=(u*t)+(0.5*a*t*t);
    printf("%.2lf\n",s);
    return 0;
}
