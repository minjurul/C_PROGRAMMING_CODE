#include<stdio.h>
int main()
{
    int *p, a[20], n, i, s=0;
    p=a;
    printf("Enter the number of element:");
    scanf("%d", &n);
    printf("Enter the number:");
    for (i=0; i<n; i++)
    {
        scanf("%d", &*(p+i));
        s=s+*(p+i);
    }
    printf("\nSum= %d", s);
    return 0;
}
