def Main():
    n = int(input())
    cits = list(map(int, input().split()))

    cits.sort()
    ans = 0
    for i in range(n-1):
        ans += (cits[n-1]-cits[i])

    print(ans)

if __name__ == "__main__":
    Main()
