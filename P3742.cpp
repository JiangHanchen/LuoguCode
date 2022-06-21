#include <bits/stdc++.h>
using namespace std;
char a[105] = {0}, b[105] = {0}, c[105] = {0};
int n = 0;
int main()
{
    scanf("%d", &n);
    cin >> a;
    cin >> b;
    for (int i = 0; i < n; i++)
    {
        if (b[i] > a[i])
        {
            printf("%d", -1);
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = b[i];
        printf("%c", c[i]);
    }
    return 0;
}