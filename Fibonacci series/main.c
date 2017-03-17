#include<stdio.h>
int main()
{
    int x=0, y=1, i, z, n;
    printf ("How many number you pass: ");
    scanf("%d", &n);
    printf("\nThe Fibbonacci number is: ");
    printf("0 1");
    for (i=1; i<n-1; i++)
    {
    z= x+y;
    printf("%2d", z);
    x=y;
    y=z;
    }
    printf("\n");
    return 0;
}
