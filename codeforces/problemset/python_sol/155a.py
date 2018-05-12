def Main():
    n = int(input())
    pts = list(map(int, input().split()))

    namz = 0
    minn = pts[0]
    maxx = pts[0]
    for i in range(1, n):
        if pts[i] < minn:
            minn = pts[i]
            namz += 1
        elif pts[i] > maxx:
            maxx = pts[i]
            namz += 1

    print(namz)


if __name__ == "__main__":
    Main()
