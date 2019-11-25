# URL: https://open.kattis.com/problems/temperatureconfusion

import math

inp = input().split('/')
a = int(inp[0])
b = int(inp[1])

nomF = (a - 32*b)*5
denomF = 9*b

if nomF == 0:
    denomF = 1

prime = []

if abs(nomF) > denomF:
    big = abs(nomF)
else:
    big = denomF

for i in range(2, round(math.sqrt(big))+1):
    isPrime = True
    for j in prime:
        if i % j == 0:
            isPrime = False
    if isPrime:
        prime.append(i)

x = 0

while x < len(prime):
    if nomF % prime[x] == 0 and denomF % prime[x] == 0:
        nomF = nomF // prime[x]
        denomF = denomF // prime[x]
        x -= 1
    x += 1

if nomF != 0:
    print(str(int(nomF)) + '/' + str(denomF))
else:
    print('0/1')
