#include<stdio.h>
int factorial(int a);
void main()
{
	int n;
	printf("input:");
	scanf("%d",&n);
    int fact=factorial(n);
	printf("factorial is:%d",fact);
	    return 0;
}
int factorial(int a)
{
	int i,fact=1;
	if(a==0)
	{
		goto end;
	}
	for(i=1;i<=a;i++)
    {
     fact=fact*i;
    }
    end:
	  return fact;
}
