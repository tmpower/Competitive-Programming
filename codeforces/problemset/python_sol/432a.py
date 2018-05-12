def Main():
    n, k = map(int, input().split())
    parts = list(map(int, input().split()))

    parts.sort()
    ans = 0
    for i in range(2, n, 3):
        if parts[i] + k <= 5:
            ans+=1

    print(ans)

if __name__ == "__main__":
    Main()
