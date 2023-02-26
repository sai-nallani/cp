with open('gymnastics.in') as read:
	session_num, cow_num = [int(i) for i in read.readline().split()]
	sessions = []
	for _ in range(session_num):
		sessions.append([int(c) - 1 for c in read.readline().split()])

better_pairs = 0
for c1 in range(cow_num):
    for c2 in range(cow_num):
        if c1 != c2:
            for s in sessions:
                if s.index(c1) < s.index(c2):
                    break
            else:
                better_pairs += 1

print(better_pairs, file=open('gymnastics.out', 'w'))