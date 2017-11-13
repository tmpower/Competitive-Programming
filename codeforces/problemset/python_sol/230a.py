def Main():
    n, m = map(int, input().split())

    tup1 = []
    for i in range(m):
        arr = list(map(int, input().split()))
        tup1.append(arr)

    tup1.sort()

    ans = 1
    for i in range(m):
        if tup1[i][0] >= n:
            ans = 0
            break
        else:
            n += tup1[i][1]
        
    if ans == 1:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    Main()
