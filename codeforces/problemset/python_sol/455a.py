def Main():
    n = int(input())
    arr = list(map(int, input().split()))

    arr.sort()

    pp = dict()
    for i in range(n):
        val = pp.get(arr[i], 0)
        pp[arr[i]] = val + 1
    
    ans = 0
    a = [0] * (arr[n-1]+1)
    for key in range(1, len(a)):
        val = pp.get(key, 0)
        a[key] = a[key-2] + key * val
        
        if a[key] < a[key-1]:
            a[key] = a[key-1]
        
        if a[key] > ans:
            ans = a[key]
    
    #print(a)

    print(ans)

if __name__ == "__main__":
    Main()
