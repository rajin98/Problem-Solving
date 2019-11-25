# URL: https://open.kattis.com/problems/acm

lst = []
temp = ''
time = 0

while not temp == '-1':
    temp = input()
    if not temp == '-1':
        lst.append(temp)

solved = []

for i in range(len(lst)):
    lst[i] = lst[i].split(' ')
    if lst[i][2] == 'right':
        time += int(lst[i][0])
        solved.append(lst[i][1])

for i in range(len(lst)):
    if lst[i][2] == 'wrong' and lst[i][1] in solved:
        time += 20

print(len(solved), time)
