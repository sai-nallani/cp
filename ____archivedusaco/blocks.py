import sys

sys.stdin = open("blocks.in", "r")
sys.stdout = open("blocks.out", "w")

def countfreq(s):
    freqs = [0]*26
    for c in s:
        freqs[ord(c)-ord('a')]+=1
    return freqs
alphabet_count = [0] * 26

ans=[0]*26
N = int(input())
for i in range(N):
    w1, w2 = input().split()
    freq1, freq2 = countfreq(w1), countfreq(w2)
    for j in range(26):
        ans[j]+=max(freq1[j], freq2[j])
for i in alphabet_count:
    print(i)