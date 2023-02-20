herdle = ""
guess = ""
for _ in range(3):
    herdle+=input()
for _ in range(3):
    guess+=input()

a = [False] * 9

for i, j, index in zip(herdle, guess, range(9)):
    if (i == j):
        a[index] = True

# AABBBCCC
# YYAAAZZZ
g = y = 0
for i, j, k in zip(herdle, guess, a):
    if not k:
        if j in herdle:
            y+=1
            herdle[herdle.index(j)] = "9"
