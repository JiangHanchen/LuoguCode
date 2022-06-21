#include <bits/stdc++.h>
int main()
{
    int a, b;
    int ans[1500] = {0}, n = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if ((!(i % 4) && (i % 100)) || (!(i % 400)))
        {
            n++;
            ans[n] = i;
        }
    }
    printf("%d\n", n);
    for (int i = 1; i <= n; i++)
        printf("%d ", ans[i]);
    return 0;
}