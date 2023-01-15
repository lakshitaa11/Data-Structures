#include<stdio.h>
#include<stdlib.h>
//for OR
int find_OR(int x, int y)
{
    if(x == 1 && y == 1)
    return 1;
    if(x == 0 && y == 1 || x == 1 && y == 0)
    return 1;
    if(x == 0 && y == 0)
    return 0;
}
//for AND
int find_AND(int x, int y)
{
    if(x == 1 && y == 1)
    return 1;
    else
    return 0;
}
//for NOT
int find_NOT(int x)
{
    if(x == 1)
    return 0;
    else
    return 1;
}
int main()
{
    int a, b, ch;
    printf("1. OR\n");
    printf("2. AND\n");
    printf("3. NOT\n");
    printf("4. EXIT\n");
    while(1)
    {
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: printf("Give two input 1 for TRUE and 0 for FALSE:\n");
                    scanf("%d%d", &a, &b);
                    printf("%d\n", find_OR(a,b));
                    break;
            case 2: printf("Give two input 1 for TRUE and 0 for FALSE:\n");
                    scanf("%d%d", &a, &b);
                    printf("%d\n", find_AND(a,b));
                    break;
            case 3: printf("Give an input 1 for TRUE and 0 for FALSE:\n");
                    scanf("%d", &a);
                    printf("%d\n", find_NOT(a));
                    break;
            case 4: exit(0);
            default: printf("Wrong Key\n");
        }
    }
    return 0;
}