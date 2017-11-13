def Main():
    n = int(input())
    arr1 = list(map(int, input().split()))
    arr2 = [0]*n

    for i in range(n):
        arr2[ arr1[i]-1 ] = i+1

    for i in range(n):
        print(arr2[i], end=' ', flush = True)

if __name__ == "__main__":
    Main()
