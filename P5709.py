m,t,s = input().split(' ')
m = eval(m)
t = eval(t)
s = eval(s)
if t == 0:
    print(0)
else:
    k = int(s//t)
    if(s%t != 0):
        k += 1
    ans = int(m-k)
    if(ans<=0):
        print(0)
    else:
        print(ans)
    
