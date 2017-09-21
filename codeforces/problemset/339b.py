def Main():
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))

    ans = 0
    for i in range(1, m):
        if arr[i] < arr[i-1]:
            ans+=n
    
    ans+=(arr[m-1]-1)
    print(ans)

if __name__ == "__main__":
    Main()
