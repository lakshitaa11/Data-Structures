// #include<stdio.h>
// int main()
// {
//     int i, j, n;
//     printf("Enter the value of n:");
//     scanf("%d", &n);
//     for(i = 0; i < n; i++)
//     {
//         printf("*");
//     }
//     for(i=0;i<=n-1;i++)
//     {
//         for(j=1;j<=3-i;j++)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=1;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(i = 0; i < n; i++)
//     {
//         printf("*");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n, i, l = 0, h, j, k, a[10][10];
//     printf("Enter the value of n:");
//     scanf("%d", &n);
//     h = 2*n-2;
//     while(n > 0)
//     {
//         for(i = l; i <= n; i++)
//         {
//             for(j = l; j <= n; j++)
//             {
//                 if(i == l || i == h || j == l || j == h)
//                 {
//                     a [i][j] = n;
//                 }
//             }
//         }
//         n--;
//         l++;
//         h--;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("enter the number :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = n; k > i; k--)
        {
            printf(" ");
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        if (i > 1)
        {
            for (j = i; j > 1; j--)
            {
                printf("%d", j - 1);
            }
        }
    }
    return 0;
}
