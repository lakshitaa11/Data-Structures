#include<stdio.h>
void reverse(char*);
void main()
{
    char name[10] = "xyz";
    reverse(&name[0]);
    printf("Reversed String is %s", name);
}
void reverse(*p)
{
    int l = 0, i, temp;
    char *x, *q;
    x = p;
    while(*p != '\0')
    {
        l++;
        p++;
    }
    p = x;
    q = (p + l - 1);
    for(i = 0; i < l/2; i++)
    {
        temp = *(p+i);
        *(p+i) = *(q-i);
        *(q-i) = temp;
    }
}