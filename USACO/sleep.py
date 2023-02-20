def solve():
    n = int(input())
    arr = [int(i) for i in input().split()]
    sum_arr = sum(arr)
    for r in reversed(range(1, n+1)):
        if (sum_arr % r == 0): # you can split array up into some r parts possibly
            target_sum = sum_arr / r
            current_sum = 0
            ok = True
            for i in arr:
                current_sum += i
                if current_sum > target_sum:
                    ok = False
                    break
                if current_sum == target_sum:
                    current_sum = 0
            if ok:
                print(n-r)
                return

def main():
    t = int(input())
    while (t>0):
        solve()
        t -= 1

if __name__ == "__main__":
    main()