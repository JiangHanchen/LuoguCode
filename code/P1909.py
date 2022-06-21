t = input()
t = eval(t)
n = 0
price = float('inf')
for i in range(3):
    n = 0
    (x,y) = map(int,input().split(' '))
    while 1:
        n += 1
        number = n * x
        if number >= t:
            temp = n * y
            if temp < price:
                price = temp
            break
print(price)
