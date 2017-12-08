def Main():
    n = int(input())

    ans = 0
    while n > 0:
        ans+=(1&n)
        n = n>>1
    print(ans)


if __name__ == "__main__":
    Main()
