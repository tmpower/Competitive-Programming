def Main():
    n, k = map(int, input().split())

    l = 0
    r = n
    while l < r:
        mid = (l+r+1)//2
        if k + 5*((mid*(mid+1))//2) <= 240:
            l = mid
        else:
            r = mid-1

    print(l)


if __name__ == "__main__":
    Main()
