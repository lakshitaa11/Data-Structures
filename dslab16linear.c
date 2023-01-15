#include <stdio.h>
int main()
{
    int a[100], n, i, key, c = 0;
    printf("LAKSHITA\n2100321530092\n");
    printf("Enter number of element in the array:");
    scanf("%d", &n);
    printf("Enter the array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            c++;
            break;
        }
    }
    if (c == 0)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at position: %d\n", i + 1);
    }
    return 0;
}