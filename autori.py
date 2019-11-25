# URL: https://open.kattis.com/problems/autori

inp = input()

out = ''

out += inp[0]

for i in range(len(inp)):
    if inp[i] == '-':
        out += inp[i+1]

print(out)
