#include <stdio.h>
int main()
{
    int i, n, a[100], sum = 0;
    float avg;
    printf("LAKSHITA\n2100321530092\n");
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("\nEnter the marks of students: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    avg = sum / n;
    printf("\nThe class average: %.2f \n", avg);
    return 0;
}