def Main():
    n, l = map(int, input().split())
    lamps = list(map(int, input().split()))

    lamps.sort()

    min_d = 0.0
    for i in range(n-1):
        if min_d < (lamps[i+1] - lamps[i])/2:
            min_d = (lamps[i+1] - lamps[i])/2

    if min_d < lamps[0]-0:
        min_d = lamps[0]-0

    if min_d < l-lamps[n-1]:
        min_d = l-lamps[n-1]

    print(min_d)

if __name__ == "__main__":
    Main()
