def Main():
    n = int(input())

    arr = []
    tmp = list( map(int, input().split()) )
    arr.append(tmp)

    ans = 0
    for _ in range(n-1):
        tmp = list( map(int, input().split()) )
        
        for i in range(len(arr)):
            if arr[i][0] == tmp[1]:
                ans+=1
            if arr[i][1] == tmp[0]:
                ans+=1

        arr.append(tmp)
    
    print(ans)

if __name__ == "__main__":
    Main()
