a = []
m,n,k = input().split(' ')
m = eval(m)
n = eval(n)
k = eval(k)
a.append(m)
a.append(n)
a.append(k)
print(min(a),end = ' ')
del a[a.index(min(a))]
print(min(a),end = ' ')
del a[a.index(min(a))]
print(max(a))
