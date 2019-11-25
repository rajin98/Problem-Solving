// URL: https://open.kattis.com/problems/thanosthehero

n = int(input()) 

a = list(map(int, input().split())) 

# print(a) 

life = 0 

for i in range(n - 1, 0, -1): 
# print(a[i], a[i-1]) 
    if (a[i] - a[i-1]) < 0: 
        life += (a[i-1] - a[i]) + 1 
# print(a[i-1]) 
        a[i-1] = a[i] - 1 

if a[1] <= 0: 
    print(1) 
else: 
    print(life) 
