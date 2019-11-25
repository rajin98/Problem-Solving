# URL: https://open.kattis.com/problems/owlandfox

t = int(input())

for i in range(t):
    case = input()
    sumCase = 0
    for j in case:
        sumCase += int(j)
    sumCase -= 1
    bigint = []
    for j in range(len(case)):
        dig = int(case[j])
        if sumCase - dig >= 0:
            bigint.append(dig)
            sumCase -= dig
        else:
            bigint.append(sumCase)
    builder = ''
    for j in bigint:
        builder += str(j)
    print(int(builder))
