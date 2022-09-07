def maxDistance(arr, n):
    m = {}
    maxDict = 0
    for i in range(n):
        if arr[i] not in m.keys():
          # index as key
            m[arr[i]] = i
        else:
            maxDict = max(maxDict, i - m[arr[i]])
            
    return maxDict

n = int(input())
arr = list(map(int, input().strip().split()))[:n]

print(maxDistance(arr, n))
