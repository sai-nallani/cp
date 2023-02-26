import sys
sys.stdin = open("circlecross.in", "r")
sys.stdout = open("circlecross.out", "w")
s = input()
res = 0
pair = []
i = 0
while (i < len(s) - 1):
    x = s[i:i+2]
    if (s[i] != s[i+1]):
        if (x in pair):
            i+=1
        elif (x in s[i+2:]):
            res += 1
            i += 1
            pair.append(x)
    i += 1
print(res)