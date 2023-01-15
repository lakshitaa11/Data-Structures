#include <stdio.h>
int main()
{
    int m, n, a[100][100], i, j, b[100][100], c[100][100];
    printf("LAKSHITA\n2100321530092\n");
    printf("Enter order of matrix:\n");
    scanf("%d%d", &m, &n);
    printf("Enter the Elements of First Matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the Elements of Second Matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Resultant Matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}