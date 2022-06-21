a, b, c = input().split(' ')
a = eval(a)
b = eval(b)
c = eval(c)
p = 0.5*(a + b + c)
import math
s = pow(p*(p-a)*(p-b)*(p-c),0.5)
print(round(s,1))
