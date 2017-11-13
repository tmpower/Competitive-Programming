def Main():
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    for i in range(n):
        print(arr[i], end=' ', flush = True)

if __name__ == "__main__":
    Main()
