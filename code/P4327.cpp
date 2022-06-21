#include <bits/stdc++.h>
void PrintLine1(int l)
{
    for (int i = 1; i <= l; i++)
    {
        if (!(i % 3))
            printf("..*.");
        else
            printf("..#.");
    }
    printf(".");
}
void PrintLine2(int l)
{
    for (int i = 1; i <= l; i++)
    {
        if (!(i % 3))
            printf(".*.*");
        else
            printf(".#.#");
    }
    printf(".");
}
void PrintLine3(int l, char *p)
{
    for (int i = 1; i <= l; i++)
    {
        if ((i != 1) && ((i % 3 == 0) || ((i - 1) % 3) == 0))
            printf("*.%c.", *p);
        else
            printf("#.%c.", *p);
        p++;
    }
    if (l % 3 == 0)
        printf("*");
    else
        printf("#");
}
int main()
{
    char str[20] = {0};
    scanf("%s", &str);
    int l = strlen(str);
    PrintLine1(l);
    printf("\n");
    PrintLine2(l);
    printf("\n");
    PrintLine3(l, str);
    printf("\n");
    PrintLine2(l);
    printf("\n");
    PrintLine1(l);
    return 0;
}