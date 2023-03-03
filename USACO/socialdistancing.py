N = int(input())
stalls = list(input())
ones = []
# account for edge cases (no ones)
for i in range(N):
    if (stalls[i] == '1'):
        ones.append(i)

