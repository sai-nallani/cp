N = int(input())
cows = input()
E = list(map(int, input().split()))

ans = 0

h = sum([1 for i in cows if i == "H"])
g = N - h

possibleLeaders = set()

for i, e in enumerate(E):
    listOfCows = cows[i : e + 1]
    countH = sum([1 for i in cows if i == "H"])
    if countH == h or N - countH == g:
        possibleLeaders.add(i)

for i, e in enumerate(E):
    listOfCows = cows[i : e + 1]
    for l in possibleLeaders:
        if l in listOfCows:
            possibleLeaders.add(e)