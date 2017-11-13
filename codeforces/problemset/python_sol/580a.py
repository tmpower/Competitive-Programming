def Main():
    n = int(input())
    arr = list(map(int, input().split()))

    maxx = 1
    curr = 1
    for i in range(1, n):
        if arr[i-1] <= arr[i]:
            curr +=1
        else:
            curr = 1

        if curr > maxx:
            maxx = curr
    
    print(maxx)

if __name__ == "__main__":
    Main()
