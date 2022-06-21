n = input()
n = eval(n)
if n <= 3:
    print(0)
else:
    up = 1
    for i in range(1,5):
        up *= n
        n -= 1
    ans = up // 24
    print(ans)
