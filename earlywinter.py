# URL: https://open.kattis.com/problems/earlywinter

inp = input().split(' ')
d = input().split(' ')

dm = int(inp[1])
n = -1

for i in range(int(inp[0])):
    if int(d[i]) <= dm:
        n = i
        break

if not n == -1:
    print("It hadn't snowed this early in " + str(n) + " years!")
else:
    print("It had never snowed this early!")
