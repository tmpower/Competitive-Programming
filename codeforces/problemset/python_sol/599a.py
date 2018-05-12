def Main():
    d1, d2, d3 = map(int, input().split())

    ans = d1+d2+d3
    if ans > 2*d1 + 2*d2:
        ans = 2*d1 + 2*d2
    elif ans > 2*d1 + 2*d3:
        ans = 2*d1 + 2*d3
    elif ans > 2*d2 + 2*d3:
        ans = 2*d2 + 2*d3

    print(ans)

if __name__ == "__main__":
    Main()
