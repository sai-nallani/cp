N = int(input())
cows = list(map(int, input().split()))

cows.sort()

def approach1():
    ans = 0
    minTuition = 10000000000
    for tuition in range(1, cows[-1]+1):
        i = 0
        for cow_index in range(N):
            if (cows[cow_index] >= tuition):
                i = cow_index
                break
        profit = (N - i) * tuition
        if (profit > ans):
            ans = profit
            minTuition = tuition
    print(ans, minTuition)

def approach2():
    ans = 0
    minTuition = 10000000000 
    for i, cost in enumerate(cows):
        profit = (N - i) * cost

        if (profit > ans):
            ans = profit
            minTuition = cost
    print(ans, minTuition)

approach2()
# W RIZZ W RIZZ W RIZZ W RIZZ W RIZZ
