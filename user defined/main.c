#include <stdio.h>
#define swap();
main()
{
    int m,n;
    printf("  input a:");
    scanf("%d",&m);
    printf("  input b:");
    scanf("%d",&n);
     swap(&m,&n);
    printf(":::::::::after swapping::::::::\n");
    printf("  input a:%d\n  input b:%d",m,n);
}
swap(int m,int n)
{
    int temp;
    temp=m;
    m=n;
    n=temp;
}
