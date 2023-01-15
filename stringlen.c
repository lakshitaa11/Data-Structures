#include<stdio.h>

int xstrlen(char *);
int main()
{
    int l;
    char name[10] = "lakshita";
    l = xstrlen(name);
    printf("length = %d\n", l);
}
int xstrlen(char *y)
{
    int p = 0;
    while(*y != '\0')
    {
        p++;
        y++;
    }
    return(p);
}
