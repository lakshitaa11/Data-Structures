#include<stdio.h>
void palindrome(char *name)
{
    char *p, *q;
    p = name;
    q = name;
    while(*q != '\0')
    {
        q++;
    }
    q--;
    while (*p == *q && p<q)
    {
        p++;
        q--;
    }
    if(p >= q)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a Palindrome\n");
    }
}
int main()
{
    char name[10];
    printf("Enter String:");
    scanf("%s", name);
    palindrome(name);
}