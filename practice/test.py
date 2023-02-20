def decode(a):
    if a == "A": return 1
    if a == "B": return 2
    if a == "C": return 3
score = 0
def win(a):
    if a == "A": return 2
    if a == "B": return 3
    if a == "C": return 1
def lose(a):
    if a == "A": return 3
    if a == "B": return 1
    if a == "C": return 2

with open("in.txt") as f:
    for i in f.readlines():
        a,b = i.split(" ")
        b = b[0]
        match b:
            case 'X':
                score += lose(a)
            case 'Y':
                score += 3 + decode(a)
            case 'Z':
                score += 6 + win(a)

print(score)
