#include <bits/stdc++.h>
int ans = 0, c[10005] = {0}, n = 0, flag = 0;
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &c[i]);
    }
    while (1)
    {
        for (int i = 1; i < n; i++)
        {
            if (c[i] > c[i + 1])
            {
                swap(&c[i], &c[i + 1]);
                flag = 1;
                ans++;
            }
        }
        if (!flag)
            break;
        else
            flag = 0;
    }
    printf("%d", ans);
    return 0;
}