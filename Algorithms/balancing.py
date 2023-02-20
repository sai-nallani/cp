N, B = list(map(int, str(input()).split()))
cors = []
x = y = []
for _____ in range(N):
    ix, iy = list(map(int, str(input()).split()))
    x.append(ix)
    y.append(iy)
    cors.append([ix, iy])

tmp = sorted(x)
avgX = int((tmp[int(N/4)] + tmp[int(3*N/4)])/2)
tmp = sorted(y)
avgY = int((tmp[int(N/4)] + tmp[int(3*N/4)])/2)
print(avgX, avgY)
q4 = q3 = q2 = q1 = 0
for xc, yc in cors:
    if xc > avgX and yc > avgY:
        q1 += 1
    elif xc > avgX and yc < avgY:
        q4 += 1
    elif xc < avgX and yc < avgY:
        q3 += 1
    elif xc < avgX and yc > avgY:
        q2 += 1

print(max(q1, q2, q3, q4))
