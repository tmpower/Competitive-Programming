def Main():
    n = int(input())
    recs = list(map(int, input().split()))

    npol = 0
    ncr = 0
    for i in range(n):
        if recs[i] == -1:
            if npol == 0:
                ncr += 1
            else:
                npol -= 1
        else:
            npol += recs[i]

    print(ncr)

if __name__ == "__main__":
    Main()
