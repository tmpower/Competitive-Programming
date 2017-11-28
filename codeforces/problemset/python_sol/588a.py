def Main():
    n = int(input())

    minsf = 101
    ans = 0
    for i in range(n):
        a, p = map(int, input().split())
        if minsf > p:
            minsf = p
        ans+=(minsf*a)
    
    print(ans)

if __name__ == "__main__":
    Main()
