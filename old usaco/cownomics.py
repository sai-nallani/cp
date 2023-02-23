with open("cownomics.in", "r") as fin:
    i = fin.readlines()
    n, m = map(int, i[0].split())
    spotty = [j.rstrip('\n') for j in i[1:1+n]]
    plain = [j.rstrip('\n') for j in i[1+n:]]

res = 0
for pos in range(m):
    should_add = True
    for Ss in spotty:
        for Ps in plain:
            if Ps[pos] == Ss[pos]:
                should_add = False
    if should_add: res+=1
            



print(res, file=open("cownomics.out", "w"))
