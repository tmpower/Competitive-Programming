def Main():
    n = int(input())
    grps = list(map(int, input().split()))

    x = [0]*4
    for i in range(n):
        x[grps[i]-1]+=1
    
    ans = x[3]
    if x[2] > 0:
        if x[0] < x[2]:
            x[0] = 0
        else:
            x[0] -= x[2]
        ans += x[2]
    
    ans+=x[1]//2
    if x[1]%2 == 1:
        x[0] -= 2
        ans += 1
    
    if x[0] > 0:
        ans += (x[0]-1)//4+1
    print(ans)

if __name__ == "__main__":
    Main()
