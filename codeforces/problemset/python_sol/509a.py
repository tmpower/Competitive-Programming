def Main():
    n = int(input())

    a = [[0]*n]*n
    for i in range(n):
        a[i][0] = 1
        a[0][i] = 1

    for i in range(1, n):
        for j in range(1, n):
            a[i][j] = a[i-1][j]+a[i][j-1]

    print(a[n-1][n-1])


if __name__ == "__main__":
    Main()
