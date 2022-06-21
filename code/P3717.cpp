#include <bits/stdc++.h>
int m, n, r;
int X[101] = {0}, Y[101] = {0};
int map[101][101] = {0};
int ans = 0;
int x, y;
void ScanDat()
{
    scanf("%d%d%d", &m, &n, &r);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &X[i]);
        scanf("%d", &Y[i]);
    }
}
void ChgStat()
{
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= m; j++)
            for (int k = 1; k <= n; k++)
            {
                x = i - X[k];
                y = j - Y[k];
                if (x * x + y * y <= r * r)
                {
                    ans++;
                    break;
                }
            }
    printf("%d", ans);
}
int main()
{
    ScanDat();
    ChgStat();
    return 0;
}