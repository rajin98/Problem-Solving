# URL: https://open.kattis.com/problems/encodedmessage

import math
T = int(input())
TAns = ""
for i in range(T):
    string = input()
    decode = ''
    length = int(math.sqrt(len(string)))
    encode = [[] for _ in range(length)]
    ite = 0
    for j in range(length):
        for k in range(length):
            encode[j].append(string[ite])
            ite += 1
    for j in reversed(range(length)):
        for k in range(length):
            decode += encode[k][j]

    TAns = TAns + decode + '\n'
    
print(TAns)
