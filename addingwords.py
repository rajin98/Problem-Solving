# URL: https://open.kattis.com/problems/addingwords

import sys
defDict = {}

while True:
    try:
        line = input()
    except:
        break
    tot = 0
    flag = False
    cmd = line.split()
    if cmd[0] == "def":
        defDict[cmd[1]] = int(cmd[2])
    elif cmd[0] == "calc":
        if cmd[1] in defDict.keys():
            tot = defDict[cmd[1]]
        else:
            flag = True
        for i in range(2, len(cmd)-1, 2):
            if cmd[i+1] in defDict.keys():
                if cmd[i] == "-":
                    tot += defDict[cmd[i+1]]*-1
                else:
                    tot += defDict[cmd[i + 1]]
            else:
                flag = True
        for i in defDict.keys():
            if defDict[i] == tot:
                tot = i
        if type(tot) != str:
            flag = True
        if flag:
            print(" ".join(cmd[1:]), "unknown")
        else:
            print(" ".join(cmd[1:]), tot)

    else:
        defDict.clear()
