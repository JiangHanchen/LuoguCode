import math
s,v = input().split(" ")
s = eval(s)
v = eval(v)
dt = math.ceil(s / v) + 10
dh = dt // 60
dm = dt % 60
if dt <= 480:
    if dm == 0:
        h = 8 - dh
        m = 0
    else:
        h = 7 - dh
        m = 60 - dm
else:
    h = 24 - (dh - 8) - 1
    m = 60 - dm
    if m == 60:
        m = 0
        h += 1
if h < 10:
    print("0{}:".format(h),end = "")
else:
    print("{}:".format(h),end = "")
if m < 10:
    print("0{}".format(m),end = "")
else:
    print("{}".format(m),end = "")
