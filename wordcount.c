#include<stdio.h>
int main()
{
    char a[200];
    int count = 0, i;
    printf("Enter the string:");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == ' ')
        {
            count++;
        }
    }
    printf("Number of words are %d\n", count + 1);
}