# URL: https://open.kattis.com/problems/eatingout

inp = input().split(' ')
for i in range(4):
    inp[i] = int(inp[i])

if 2*inp[0] >= inp[1]+inp[2]+inp[3]:
    print("possible")
else:
    print("impossible")
