import sys

sys.stdin = open("socdist1.in")
sys.stdout = open("socdist1.out", "w")
N = int(input())
stalls = list(input())

furthest_distance = -1
first_cow_pos = -1
previous_cow = stalls.index('1')
for i, c in enumerate(stalls):
    if (c == '1'):
        pos = int((previous_cow + i) / 2)
        dis = min(pos - previous_cow, i - pos)
        if (dis > furthest_distance):
            furthest_distance = dis
            first_cow_pos = pos
        previous_cow = i
    # print(f"{i}, {c},  max: {furthest_distance}, cow_pos: {first_cow_pos}")

stalls[first_cow_pos] = '1'

furthest_distance2 = -1
second_cow_pos = -1
previous_cow = stalls.index('1')
for i, c in enumerate(stalls):
    if (c == '1'):
        pos = int((previous_cow + i) / 2)
        dis = min(pos - previous_cow, i - pos)
        if (dis > furthest_distance2):
            furthest_distance2 = dis
            second_cow_pos = pos
        previous_cow = i
    # print(f"{i}, {c},  max: {furthest_distance2}, cow_pos: {second_cow_pos}")


# print(f"{first_cow_pos}, {second_cow_pos}")

print(min(furthest_distance, furthest_distance2))
