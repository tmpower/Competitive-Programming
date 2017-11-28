def Main():
    n, h = map(int, input().split())
    arr = list(map(int, input().split()))

    jemi = 0
    for i in range(len(arr)):
        if arr[i] > h:
            jemi += 2
        else:
            jemi += 1
    print(jemi)


if __name__ == "__main__":
    Main()
