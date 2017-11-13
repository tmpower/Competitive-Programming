def Main():
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))

    arr.sort()
    ans = 1001

    for i in range(m-n+1):
        if ans > arr[i+n-1] - arr[i]:
            ans = arr[i+n-1] - arr[i]
    
    print(ans)

if __name__ == "__main__":
    Main()
