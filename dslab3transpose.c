#include <stdio.h>
int main()
{
    int m, n, a[100][100], i, j, b[100][100];
    printf("LAKSHITA\n2100321530092\n");
    printf("Enter order of  matrix:");
    scanf("%d%d", &m, &n);
    printf("Enter Elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            b[j][i] = a[i][j];
        }
    }
    printf("Transpose Matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}