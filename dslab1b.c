#include <stdio.h>
int main()
{
    int i, n, a[100], big;
    printf("LAKSHITA\n2100321530092\n");
    printf("Enter the total numbers: ");
    scanf("%d", &n);
    printf("Enter the numbers: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    big = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > big)
        {
            big = a[i];
        }
    }
    printf("Largest number is: %d \n", big);
    return 0;
}