def delete_extra_zero(n):
    '''删除小数点后多余的0'''
    if isinstance(n, int):
        return n
    if isinstance(n, float):
        n = str(n).rstrip('0')  # 删除小数点后多余的0
        n = int(n.rstrip('.')) if n.endswith('.') else float(n)  # 只剩小数点直接转int，否则转回float
        return n
m,h = input().split(' ')
m = eval(m)
h = eval(h)
ans = m/(h*h)
ans = str(ans)
k = 0
for i in ans:
    if i == '.':
        break
    else:
        k += 1
ans = eval(ans)
ans = round(ans,6-k)
ans = delete_extra_zero(ans)
if ans < 18.5:
    print("Underweight")
elif ans >= 24:
    print(ans)
    print("Overweight")
else:
    print("Normal")
