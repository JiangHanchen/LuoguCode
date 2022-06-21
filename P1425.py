sh, sm, eh, em = input().split(" ")
sh = eval(sh)
sm = eval(sm)
eh = eval(eh)
em = eval(em)
if em >= sm:
    dm = em - sm
    dh = eh - sh
else:
    dm = em + 60 - sm
    dh = eh - 1 - sh
print("{} {}".format(dh,dm))
