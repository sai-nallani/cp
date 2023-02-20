import sys
sys.stdin = open("speeding.in", "r")
sys.stdout = open("speeding.out", "w")

road_segments = []
bessie_segments = []
n, m = map(int, input().split())
for _ in range(n):
    miles, limit = map(int, input().split())
    road_segments.extend([limit]*miles)
for _ in range(m):
    miles, limit = map(int, input().split())
    bessie_segments.extend([limit]*miles)

max_over_limit = 0
for limit in range(100):
    if road_segments[limit] < bessie_segments[limit]:
        max_over_limit = max(bessie_segments[limit] - road_segments[limit], max_over_limit)
print(max_over_limit)