#include <stdio.h>

int main()
{
    int n;
    float i, sum, term;

    printf("1 + 1 / 2 + 1 / 3 +......+1 / n \n");
    printf("Enter the value of n:");
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        term = 1 / i;
        sum = sum + term;
    }
    printf("\nthe Sum of H.P Series is = %.2f\n", sum);
    return 0;
}
