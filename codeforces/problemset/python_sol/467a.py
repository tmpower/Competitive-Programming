def Main():
    n = int(input())

    ans = 0
    for i in range(n):
        x, y = map(int, input().split())
        if y - x > 1:
            ans+=1
    
    print(ans)

if __name__ == "__main__":
    Main()
