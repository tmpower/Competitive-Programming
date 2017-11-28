def Main():
    k = int(input())
    mnt = list(map(int, input().split()))

    mnt.sort(reverse=True)
    summ = 0
    i = 0
    while summ < k:
        if i == 12:
            break

        summ += mnt[i]
        i+=1
    
    if i == 12 and summ < k:
        print(-1)
    else:
        print(i)

if __name__ == "__main__":
    Main()
