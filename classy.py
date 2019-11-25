# URL: https://open.kattis.com/problems/classy

T = int(input())

classLvl = {'middle': '2', 'upper': '3', 'lower': '1'}

for i in range(T):
    n = int(input())
    inp = []
    outp = []
    for j in range(n):
        inp.append(input())
    long = 0

    for j in range(n):
        inp[j] = ''.join(inp[j].split(' class'))
        inp[j] = list(inp[j].split(': '))
        inp[j][1] = tuple(inp[j][1].split('-'))
        if len(inp[j][1]) > long:
            long = len(inp[j][1])
    for j in range(n):
        num = '0.'
        for k in range(long):
            if len(inp[j][1]) > k:
                num += classLvl[inp[j][1][len(inp[j][1]) - 1 - k]]
            else:
                num += '2'
        inp[j][1] = float(num)
    inp.sort(key=lambda x: x[0])
    inp.sort(key=lambda x: x[1], reverse=True)

    for j in inp:
        print(j[0])
    for _ in range(30):
        print('=', end='', flush=True)
    print('')
