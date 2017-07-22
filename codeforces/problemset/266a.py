def Main():
    n = int(input())
    stones = input()

    ans = 0
    for i in range(n-1):
        if stones[i] == stones[i+1]:
            ans+=1
    
    print(ans)

if __name__ == "__main__":
    Main()
