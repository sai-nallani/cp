'''
LANG: PYTHON3
TASK: beads
'''
with open('beads.in', 'r') as fin:
    n = int(fin.readline())
    s = fin.readline()

s = " " + s + s + " "
left, right = [[0, 0] for i in range(400)], [[0, 0] for t in range(400)]  # 0 is red, 1 is blue
left[0][0] = left[0][1] = 0
for i in range(n + n + 1):
    if s[i] == 'r':
        left[i][0] = left[i - 1][0] + 1
        left[i][1] = 0
    elif s[i] == 'b':
        left[i][1] = left[i - 1][1] + 1
        left[i][0] = 0
    elif s[i] == 'w':
        left[i][0] = left[i - 1][0] + 1
        left[i][1] = left[i - 1][1] + 1

right[n + n + 1][0] = right[n + n + 1][1] = 0
for i in reversed(range(1, n + n)):
    if s[i] == 'r':
        right[i][0] = right[i + 1][0] + 1
        right[i][1] = 0
    elif s[i] == 'b':
        right[i][1] = right[i + 1][1] + 1
        right[i][0] = 0
    elif s[i] == 'w':
        right[i][0] = right[i + 1][0] + 1
        right[i][1] = right[i + 1][1] + 1


ans = 0
for i in range(n + n + 1):
    print(max(left[i][0], left[i][1]) + max(right[i + 1][0], right[i + 1][1]))
    ans = max(ans, max(left[i][0], left[i][1]) + max(right[i + 1][0], right[i + 1][1]))
print(ans)

with open('beads.out', 'w') as fout:
    fout.write(str(min(ans, n)) + '\n')
