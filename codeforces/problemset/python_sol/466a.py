def Main():
    n, m, a, b = map(int, input().split())

    ans1 = n * a
    ans2 = (n//m)*b + (n%m)*a
    ans3 = (((n-1) // m) + 1) * b

    ans = min(ans1, ans2, ans3)
    print(ans)


if __name__ == "__main__":
    Main()
