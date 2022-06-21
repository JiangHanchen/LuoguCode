#include <bits/stdc++.h>
int n, ans = 1;
void jiecheng(int n)
{
    if (!n)
    {
        return;
    }
    ans *= n;
    jiecheng(n - 1);
}
int main()
{
    scanf("%d", &n);
    jiecheng(n);
    printf("%d", ans);
    return 0;
}