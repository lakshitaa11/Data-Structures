#include <stdio.h>
int main()
{
    int c, first, last, middle, n, search, array[100];
    printf("LAKSHITA\n2100321530092\n");
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            printf("Element found at position: %d\n", middle + 1);
            break;
        }
        else
            last = middle - 1;
        middle = (first + last) / 2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);
    return 0;
}