#include <stdio.h>
int main()
{
    int n, a, b, i, j, k;

    printf("Enter the number");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);


        }

        for (k=j; k < 1; k--)
        {
            printf("%d", k);
        }

        printf(" ");
    }
}