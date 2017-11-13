def Main():
    n = int(input())

    xt = 0
    yt = 0
    zt = 0
    for i in range(n):
        x, y, z = map(int, input().split())
        xt +=x
        yt +=y
        zt +=z
    
    if xt == 0 and yt == 0 and zt == 0:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    Main()
