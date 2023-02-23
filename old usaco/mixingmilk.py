import sys

sys.stdin = open("mixmilk.in", "r")
sys.stdout = open("mixmilk.out", "w")
buckets = [0]*3
capacity = [0]*3
for i in range(3):
    x = input().split()
    capacity[i], buckets[i] = int(x[0]), int(x[1])

def fill_bucket(fromB, toB):
    x = buckets[fromB]
    y = capacity[toB] - buckets[toB]
    if capacity[toB] >= buckets[toB] + x:
        buckets[fromB] -= x
        buckets[toB] += x
    else:
        buckets[toB] += y
        buckets[fromB] -= y

for i in range(1, 5):
    fill_bucket((i-1)%3, i%3)
for i in buckets: print(i)