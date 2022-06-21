x = input()
x = eval(x)
str = "Today, I ate "
if x > 1:
    str2 = " apples."
else:
    str2 = " apple."
print(str + "{}".format(x) + str2)
