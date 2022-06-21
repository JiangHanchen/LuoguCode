a,b = input().split(' ')
a = eval(a)
b = eval(b)
tot = a*10+b
n = 0
while True:
    if(tot < n * 19):
        break
    else:
        n += 1
print(int(n-1))
