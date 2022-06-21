a = []
b = []
flag = 0
i = 0
for i in range(0,7):
    a.append(input().split(' '))
    b.append(int(a[i][0]) + int(a[i][1]))
    if b[i] > 8 and flag == 0:
        flag = i
    if b[i] > 8 and flag != 0 and b[i] > b[flag]:
        flag = i
print(flag + 1)
