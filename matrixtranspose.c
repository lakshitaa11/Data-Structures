#include<stdio.h>
int main()
{
    int i, j , a[20][20], r1, c1, temp;
    printf("Enter row and column for matrix 1:");
    scanf("%d%d", &r1, &c1);
    printf("Enter matrix 1:");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if(i > j)
    {
        temp = a[i][j];
        a[i][j] = a[j][i];
        a[j][i] = temp;
    }
    printf("Transpose of matrix is %d", temp);
    return 0;
}