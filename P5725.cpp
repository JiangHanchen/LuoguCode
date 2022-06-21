#include <bits/stdc++.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (unsigned int i = 1; i <= a * a; i++)
    {
        if (i <= 9)
            printf("%d", 0);
        printf("%d", i);
        if (!(i % a))
            printf("\n");
    }
    printf("\n");
    int l = a * 2;
    int k = 1;
    for (unsigned int i = 1; i <= a; i++) //枚举每一行
    {
        for (unsigned int j = 1; j <= l - (2 * i); j++)
            printf(" ");
        for (unsigned int w = 1; w <= i; w++)
        {
            if (k <= 9)
                printf("%d", 0);
            printf("%d", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}