a = []
num = input()
num = int(eval(num))
if num % 2 == 0:
    a.append(1)
else:
    a.append(0)
if 4 < num <= 12:
    a.append(1)
else:
    a.append(0)
if(a[0] == 1 and a[1] == 1):
    print(1,end = " ")
else:
    print(0,end = " ")
if(a[0] | a[1] == 1):
    print(1,end = " ")
else:
    print(0,end = " ")
if((a[0] == 1 and a[1] == 0) or (a[0] == 0 and a[1] == 1)):
    print(1,end = " ")
else:
    print(0,end = " ")
if(a[0] == 0 and a[1] == 0):
    print(1,end = " ")
else:
    print(0,end = " ")
