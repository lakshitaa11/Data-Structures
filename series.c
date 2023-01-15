// Day 3 program 1
// Find the sum of first n terms of the following series: 1! + 2! + 3! + 4!...................
// #include<stdio.h>
// int main()
// {
//     int n, i, sum = 0, fact = 1;
//     printf("Enter the value upto which you want the sum:");
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//         sum = sum + fact;
//     }
//     printf("Sum is %d\n", sum);
//     return 0;
// }

// Day 3 program 2
// Write a program to find the sum of the series using the function. a) 1!/1+2!/2+3!/3+4!/4+5!/5
// #include<stdio.h>
// int main()
// {
//     int i, sum = 0, fact = 1, n;
//     printf("Enter the value upto which you want the sum:");
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//         sum = sum + (fact/i);
//     }
//     printf("Sum is %d\n", sum);
//     return 0;   
// }

// Day 3 program 3
// 1+ x + x2/2! + x3/3! + x4/4!......
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int i, x, n, fact = 1;
//     float sum = 0;
//     printf("Enter the value upto which you want the sum:");
//     scanf("%d", &n);
//     printf("Enter value of x:");
//     scanf("%d", &x);
//     for(i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//         sum = sum + (pow(x,i)/i);
//     }
//     printf("Sum is %0.1f\n", sum + 1);
//     return 0;
// }

