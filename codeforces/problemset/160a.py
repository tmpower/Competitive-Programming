def Main():
    n = int(input())
    arr = list(map(int, input().split()))

    arr.sort()
    
    summ = 0
    for i in range(n):
        summ += arr[i]

    ans = 0
    sum2 = 0
    for x in reversed(arr):
        ans+=1
        sum2 += x
        if sum2 > (summ-sum2):
            break

    print(ans)

if __name__ == "__main__":
    Main()
