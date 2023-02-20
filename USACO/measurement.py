cows = {'M': 7, 'E': 7, 'B': 7}
with open("measurement.in", "r") as f:
    i = f.readlines()
    n = int(i[0])
    x = []
    for _ in range(1, n+1):
        i[_] = i[_].split()
        z = [0, 0, 0]
        z[0] = int(i[_][0])
        z[1] = i[_][1][0]
        z[2] = int(i[_][2])
        x.append(z)

res = 0
x = sorted(x, key=lambda x:x[0])
for mea in x:
    temp = cows.copy()
    k = mea[1]
    cows[k] += mea[2]
    cows = {key: val for key, val in sorted(cows.items(), key = lambda ele: ele[1], reverse=True)}
    for q,w in zip(cows, temp):
        if q!=w:
            res+=1
            break
    else:
        if (set(temp.values()) > set(cows.values())):
            res+=1
print(res, file=open("measurement.out" , "w"))