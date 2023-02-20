import sys
# sys.stdin = open("lifeguards.in", "r")
# sys.stdout = open("lifeguards.out", "w")
n = int(input())
shifts = [list(map(int, input().split())) for _ in range(n)]

MAX_TIME = 1000
max_time_covered = 0
for i in range(n):
    time_covered = 0
    for v in range(1, MAX_TIME+1):
        for j in range(n):
            if i != j: # if not fired lifeguard
                if shifts[j][0] <= v and shifts[j][1] > v: # shift might be [5, 9], which means 5-6, 6-7, 7-8, 8-9
                    time_covered += 1
                    break
    max_time_covered = max(time_covered, max_time_covered)
print(max_time_covered)
# def time_covered(shift1, shift2):
#     s1, e1 = shift1
#     s2, e2 = shift2
#     m = max(e1, e2) - min(s1, s2)
#     x = max(min(e1, e2), max(s1, s2)) - min(min(e1, e2), max(s1, s2))
#     if (x <= 0):
#         return m
#     else:
#         return m - x

# max_time_covered = 0
# for i in shifts:
#     for j in shifts[1:]:
#         x = time_covered(i, j)
#         if x > max_time_covered:
#             max_time_covered = x
# print(max_time_covered)