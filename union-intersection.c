// UNION
// #include<stdio.h>
// int main()
// {
//   int m, n, i, j, k = 0;
//   int a[10], b[10], c[10];
//   printf("Enter number of elements in set A : ");
//   scanf("%d", &m);
//   printf("Enter the elements: \n");
//   for (i = 0; i < m; i++)
//   {
//     scanf("%d", &a[i]);
//   }
//   printf("Enter number of elements in set B : ");
//   scanf("%d", &n);
//   printf("Enter the elements: \n");
//   for (j = 0; j < n; j++)
//   {
//     scanf("%d", &b[j]);
//   }
//   for (i = 0; i < m; i++)
//   {
//     for (j = 0; j < k; j++)
//     {
//       if (c[j] == a[i])
//         break;
//     }
//     if (j == k)
//     {
//       c[j] = a[i];
//       k++;
//     }
//   }
//   for (i = 0; i < n; i++)
//   {
//     for (j = 0; j < k; j++)
//     {
//       if (c[j] == b[i])
//         break;
//     }
//     if (j == k)
//     {
//       c[k] = b[i];
//       k++;
//     }
//   }
//   printf("The Union of sets is :");
//   for (i = 0; i < k; i++)
//   {
//     printf("%d ", c[i]);
//   }
//   return 0;
// }

// INTERSECTION
#include <stdio.h>
int main()
{
  int m, n, i, j, k = 0;
  int a[10], b[10], c[10];
  printf("Enter number of elements in set A : ");
  scanf("%d", &m);
  printf("Enter the elements: \n");
  for (i = 0; i < m; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter number of elements in set B : ");
  scanf("%d", &n);
  printf("Enter the elements: \n");
  for (j = 0; j < n; j++)
  {
    scanf("%d", &b[j]);
  }
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (a[i] == b[j])
      {
        c[k] = a[i];
        k++;
      }
    }
  }
  printf("The intersection of set A and B is:");
  for (i = 0; i < k; i++)
  {
    printf("%d\n", c[i]);
  }
  return 0;
}
