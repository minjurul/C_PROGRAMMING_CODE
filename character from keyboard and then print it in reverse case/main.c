#include <stdio.h>
#include<string.h>
int main()
{
    char str[50];
    char *rev;
    printf("\tEnter the string:");
    scanf("%s",str);
    rev=strrev(str);
    printf("\n\tReverse string is:%s",rev);
    return 0;
}
