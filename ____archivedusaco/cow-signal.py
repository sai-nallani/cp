import sys
sys.stdout = open("cowsignal.out", "w")
with open('cowsignal.in', 'r') as f:
    o = [i.rstrip('\n') for i in f.readlines()]
    m,n,k = list(map(int, o[0].split()))
    lines = [""] * k * m
    x = 1
    for i in range(0, len(lines), k):
        s = o[x]
        for c in s:
            for j in range(i, i+k):
                lines[j] += c*k
        x+=1
        for j in range(i, k+i):
            print(lines[j])