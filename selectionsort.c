#include <stdio.h>
int main()
{
    int i, j, a[20], n, temp;
    printf("Enter no. of elements :");
    scanf("%d", &n);
    printf("Enter array elements:");

    for (j = 0; j < n; j++)
    {
        scanf("%d", &a[j]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1; j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            } 
        }
    }

    for (j = 0; j < n; j++)
    {
        printf("%d ", a[j]);
    }

    return 0;
}