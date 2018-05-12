def Main():
    n = int(input())
    a = input()
    b = input()

    ans = 0
    for i in range(n):
        x = int(a[i])
        y = int(b[i])
        if x == 0:
            x = 10
        if y == 0:
            y = 10

        min_s = abs(x-y)

        if min_s > (10 - max(x, y)) + min(x, y):
            min_s = (10 - max(x, y)) + min(x, y)

        ans += min_s
    
    print(ans)

if __name__ == "__main__":
    Main()
