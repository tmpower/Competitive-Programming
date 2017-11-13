def Main():

    n = int(input())
    
    ans = 0
    for i in range(n):
        x1, x2, x3 = map(int, input().split())
        if x1+x2+x3 > 1:
            ans+=1
    
    print(ans)

if __name__ == "__main__":
    Main()