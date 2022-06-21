#include <bits/stdc++.h> //在线处理：求数列中连续子序列和的最大值 洛谷P1115

int n, flag = 0;

int fun(int n, int *p)
{
    int *p0 = p;
    int sum = 0, ans = 0;
    if (flag) //数列不是全负数
    {
        for (; p <= p0 + n - 1; p++)
        {
            sum += *p;
            if (sum > ans)
                ans = sum;
            if (sum < 0)
                sum = 0; //如果之前的和是负数，舍
        }
    }
    else //数列是全负数，则直接依次比较找最大值
    {
        ans = *p;
        for (; p < p0 + n - 1; p++)
        {
            if (*p > ans)
                ans = *p;
        }
    }
    return ans;
}

int main()
{
    int arr[200010] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (!flag && arr[i] >= 0)
            flag = 1; //判断是否全为负数
    }
    printf("%d", fun(n, arr));
    return 0;
}