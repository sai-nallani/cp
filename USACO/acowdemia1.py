import sys

# sys.stdin = open("in.in")
n, l = map(int, input().split())
c = list(map(int, input().split()))
n = len(c)
c.sort()


max_h = 1
max_h_index = -1
for i, ci in enumerate(c):
    if (n - i >= ci):
        if (ci >= max_h):
            max_h = ci
            max_h_index = i
# adds one here probably
if (l > 0):
    # print(max_h, max_h_index)

    new_h = max_h+1
    for i in range(n-1, -1, -1):
        if (c[i] == max_h):
            max_h_index = i
            break

    # while True:
    #     if (max_h_index > 0 and c[max_h_index] >= new_h):
    #         max_h_index -= 1
    #     else:
    #         break

    # print(max_h_index)

    for _ in range(l):
        if (max_h_index > 0):
            c[max_h_index] += 1
            max_h_index -= 1
        else:
            c[max_h_index] += 1
            break


    # print(c)
    c.sort()
    for i, ci in enumerate(c):
        if (n - i >= ci):
            if (ci >= max_h):
                max_h = ci
                max_h_index = i


print(max_h)


