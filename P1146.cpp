#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned short n;
    scanf("%d", &n);
    printf("%d\n", n);
    bool flag[100] = {0};
    for (unsigned short pos = 0; pos < n; pos++)
    {
        for (unsigned short i = 0; i < n; i++)
        {
            if (pos != i)
                flag[i] = !flag[i];
            printf("%d", flag[i]);
        }
        printf("\n");
    }
    return 0;
}