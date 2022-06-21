import math
q = eval(input())
if q == 1:
    print("I love Luogu!")
elif q == 2:
    print(6,4)
elif q == 3:
    print("3\n12\n2")
elif q == 4:
    print(166.667)
elif q == 5:
    print(15)
elif q == 6:
    print(round(pow(36+81,0.5),4))
elif q == 7:
    print("110\n90\n0")
elif q == 8:
    print(round(2*3.141593*5,4),round(3.141593*5*5,4),round((4/3)*3.141593*5*5*5,3),sep = '\n')
elif q == 9:
    print((((1+1)*2+1)*2+1)*2)
elif q == 10:
    print(9)
elif q == 11:
    print(33.3333)
elif q == 12:
    print('13\nR')
elif q == 13:
    print(int(pow(3.141593*(4/3)*(4*4*4+10*10*10),1/3)))
else:
    p = 0
    num = 120
    ans = 0
    while 1:
        p += 1
        num -= 1
        ans = p*num
        if ans == 3500:
            break
    print(p)
