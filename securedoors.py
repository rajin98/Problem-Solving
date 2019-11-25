# URL: https://open.kattis.com/problems/securedoors

n = int(input())

def text(cur):
    if cur == 'entry':
        return 'enter'
    else:
        return cur

state = {}
for i in range(n):
    log = input().split(' ')
    if log[1] not in state.keys():
        state[log[1]] = 'exit'

    if log[0] == state[log[1]]:
        print(log[1] + ' ' + text(log[0]) + 'ed (ANOMALY)')
    else:
        state[log[1]] = log[0]
        print(log[1] + ' ' + text(log[0]) + 'ed')
