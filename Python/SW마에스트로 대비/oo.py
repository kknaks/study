import sys
from collections import deque
input = sys.stdin.readline

while True:
    ss = input().rstrip()
    if not ss:
        break
    s, t = ss.split()
    q = deque(s)
    start = 0 
    count = 0
    while q:
        w = q.popleft()
        for i in range(start+1,len(b)):
            if w == t[i] :
                count +=1
                start = i
                break
    
    if count == len(a):
        print('Yes')
    else:
        print('No')