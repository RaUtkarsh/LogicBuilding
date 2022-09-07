from sys import stdin
def maxfreq(arr):
    #Write your code here 
    d = {}
    count, j = 0, ''
    for i in reversed(arr):
        d[i] = d.get(i, 0) + 1
        if d[i] >= count:
            count, j = d[i], i
    return (j)
    
    
    
    
def takeInput():
    #To take fast I/O
    n=int(stdin.readline().strip())
    if n==0:
        return list(),0
    arr=list(map(int,stdin.readline().strip().split( )))
    return arr,n

arr,n=takeInput()
print(maxfreq(arr))
