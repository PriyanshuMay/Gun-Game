(d1, m1, y1) = [int(x.strip()) for x in input().split()]
(d2, m2, y2) = [int(x.strip()) for x in input().split()]

ans = 0
if y1 > y2: ans = 10000
elif y1 == y2:
    if m1 > m2: ans = 500 * (m1 - m2)
    elif m1 == m2 and d1 > d2: ans = 15 * (d1 - d2)  
print(ans)