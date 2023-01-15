//o/p for 1st question
// 1
// 23
// 345
// 4567
// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i = 1; i <= 4; i++){
//         for(j = i; j <= 2*i-1; j++){
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//o/p for 2nd question
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i = 1; i <= 4; i++){
//         for(j = i; j <= 2*i-1; j++)
//         {
//             if(j == i)
//             {
//                 printf("%d", j);
//             }
//             else
//             {
//                 printf(" %d", j);
//             }
//         }
//         printf("\n"); 
//     }
//     return 0;
// }

//o/p for 3rd questionA
// A
// BB
// CCC
// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i = 1; i <= 3; i++)
//     {
//         for(j = 1; j <= i; j++)
//         {
//             printf("%c", 64 +i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//o/p for 4th question
//A
//BC
//CDE
//DEFG
// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i = 1; i <= 3; i++)
//     {
//         for(j = 64+i; j <= 63+2*i; j++)
//         {
//             printf("%c", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//   *
//  ***
// *****
//*******
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i = 1; i<= 4; i++)
//     {
//         for(j = 1; j <= 4-i; j++)
//         {
//             printf(" ");
//         }
//         for(j = 1; j <= 2*i-1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//  *
// ***
//*****
// ***
//  *
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i = 1; i <= 3; i++)
//     {
//         for(j = 1; j <= 3-i; j++)
//         {
//             printf(" ");
//         }
//         for(j = 1; j <= 2*i-1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(i=1;i<=2;i++)
//     {
//        for(j=1;j <= i;j++)
//        {
//         printf(" ");
//        }
//        for(j=1;j <= 5-2*i;j++)
//        {
//         printf("*");
//        }
//        printf("\n");
//     }
//     return 0;     
// }

// #include<stdio.h>
// int main()
// {
//     int i,j,k=1;
//     for(i = 1;i <= 5;i++)
//     {
//         for(j = 1;j <= 5-i; j++)
//         {
//             printf(" ");
//         }
//         for(j = 1; j <= 2*i-1; j++)
//         {
//             if(k == 1)
//             {
//                 printf("A");
//                 k = 2;
//             }
//             else if (k == 2)
//             {
//                 printf("B");
//                 k = 3;     
//             }
//             else if (k == 3)
//             {
//                 printf("C");
//                 k = 1;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
// #include<stdio.h>
// int main()
// {
//     int i, j;
//     for(i=1; i<=5; i++)
//     {
//         for(j=1; j<=i; j++)
//         {
//             printf("%d",j);
//          }        
//         for(j=1; j<=10-2*i; j++)
//         {
//         printf(" ");
//         }
//         for(j=i ;j>=1; j--)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }