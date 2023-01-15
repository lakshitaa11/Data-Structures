// WAP in C to perform the power set operation on set.
// S = {1, 2} --> I/P
// P(S) = [ {}, {1}, {2}, {1,2}]
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j, a[10], temp;
    printf("Enter number of elements");
    scanf("%d", &n);
    printf("Enter array elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < pow(2, n); i++)
    {
        temp = i;
        printf("{");
        for (j = 0; j < n; j++)
        {
            if (temp % 2 == 1)
            {
                printf("%d", a[j]);
            }
            temp = temp / 2;
        }
        printf("}");
    }
}