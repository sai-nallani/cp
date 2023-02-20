import sys
sys.stdin = open("censor.in", "r")
sys.stdout = open("censor.out", "w")

editorial_text = input()
bad_word = input()
n = len(editorial_text)
m = len(bad_word)
i = 0
new_text = ""
for i in editorial_text:
    new_text += i
    if (new_text[-m:] == bad_word):
        new_text = new_text[:-m]

print(new_text)