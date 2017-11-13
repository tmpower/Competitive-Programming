def Main():
    n, k = map(int, input().split())
    arr = list( map(int, input().split()) )

    if(arr[k-1] == 0):
        ans = 0
        while ans < n and arr[ans] != 0:
            ans+=1    
    else:
        ans = k
        while ans < n and arr[ans-1] == arr[ans]:
            ans+=1

    print(ans)

if __name__ == "__main__":
    Main()
