# URL: https://open.kattis.com/problems/bijele

inp = [int(x) for x in input().split()]

a = [1, 1, 2, 2, 2, 8]

for i, j in zip(inp, a):
    print(j - i, end=' ', flush=True)
