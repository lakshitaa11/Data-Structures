#include <stdio.h>
int main()
{
    int m, n, p, q, a[100][100], i, j, b[100][100], c[100][100], k;
    printf("Enter order of first matrix:");
    scanf("%d%d", &m, &n);
    printf("First matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter order of Second matrix:");
    scanf("%d%d", &p, &q);
    printf("Second matrix:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (n != p)
    {
        printf("multiplication not possible");
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                for (k = 0; k < q; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("multiplied matrix\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}