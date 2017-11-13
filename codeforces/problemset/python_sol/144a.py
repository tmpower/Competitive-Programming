def Main():
    n = int(input())
    arr = list(map(int, input().split()))

    maxx = 0
    maxx_id = -1
    minn = 101
    minn_id = -1
    for i in range(n):
        if arr[i] > maxx:
            maxx = arr[i]
            maxx_id = i
        if arr[i] <= minn:
            minn = arr[i]
            minn_id = i

    if maxx_id > minn_id:
        print(maxx_id+(n-minn_id-2))
    else:
        print(maxx_id+(n-minn_id-1))


if __name__ == "__main__":
    Main()
