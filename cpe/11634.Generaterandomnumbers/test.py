import math
c=0
a0=float(input())
check=[False]*10001
while not check[round(a0)] :
   # a0=float(input())
    check[round(a0)]=True
    a0 = (a0 * a0) // 100
    a0=round(a0)
    a0 %= 10000
    c+=1
    print(a0,"  ",c) 