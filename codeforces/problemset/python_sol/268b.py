def Main():
    n = int(input())

    ans = 1
    coef = 2
    inc = 2
    for i in range(2, n+1):
        ans += coef
        coef += inc
        inc+=1

    print(ans)

if __name__ == "__main__":
    Main()
