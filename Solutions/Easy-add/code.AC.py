# Author : ysh
# 2024/11/10 Sun 21:00:54

f = ''
while True:
    try:
        f = f + input() + '\n'
    except:
        break

f = f.replace('\r\n','\n')
f = f.replace('\r','\n')
f = f.split('\n')
for i in f:
    if len(i) == 0: continue
    print(sum([int(i) for i in i.split()]))