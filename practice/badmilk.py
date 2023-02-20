import sys
sys.stdin = open("badmilk.in", "r")
sys.stdout = open("badmilk.out", "w")

N, M, D, S = list(map(int, input().split()))

timestamps = []
sick = []
for _ in range(D):
    timestamps.append(list(map(int, input().split())))

for _ in range(S):
    arr = [-1];
    arr.extend(list(map(int, input().split())))
    sick.append(arr)

def compare(a):
    return (a[2])

timestamps.extend(sick)
timestamps = sorted(timestamps, key=compare)

res = 0

# print(timestamps)

for milk in range(1, M+1):
    whoDrank = []
    sickPeople = []
    for ts in timestamps:
        if (ts[1] == milk):
            whoDrank.append(ts[0])
        if (ts[0] == -1):
            if (ts[1] in whoDrank):
                sickPeople.append(ts[1])
    # print(whoDrank)
    if len(sickPeople) > 0:
        res += 1

print(res)
