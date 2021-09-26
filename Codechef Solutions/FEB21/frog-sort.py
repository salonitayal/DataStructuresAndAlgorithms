import math
for t in range(int(input())):
    n = int(input())
    wt = list(map(int, input().split()))
    length = list(map(int, input().split()))
    indx = {}
    sm = 0
    for i in range(1, n+1):
        indx[i] = wt.index(i)
    for i in range(2, n+1):
        temp0 = indx[i]
        temp1 = indx[i-1]
        tmp = 0
        if temp0 <= temp1:
            x = temp1+1-temp0
            y = length[temp0]
            tmp = (math.ceil(x/y))
        sm += tmp
        indx[i] += tmp * (length[temp0])
        
    print(sm)