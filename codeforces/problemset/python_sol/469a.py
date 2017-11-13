def Main():
    n = int(input())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    arr3 = [None]*(n+1)

    for i in range(1,arr1[0]+1):
        arr3[arr1[i]] = 1

    for i in range(1,arr2[0]+1):
        arr3[arr2[i]] = 1
    
    okk = 1
    for i in range(1,n+1):
        if arr3[i] != 1:
            okk = 0
            break
    
    if okk == 1:
        print("I become the guy.")
    else:
        print("Oh, my keyboard!")
        

if __name__ == "__main__":
    Main()
