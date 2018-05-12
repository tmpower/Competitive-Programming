def Main():
    n, a, b, c = map(int, input().split())

    dp = [0] * 4001
    dp[a] = 1
    dp[b] = 1
    dp[c] = 1
    for i in range(n+1):
        if i - a >= 0 and dp[i-a] > 0 and dp[i-a]+1 > dp[i]:
            dp[i] = dp[i-a]+1
        if i - b >= 0 and dp[i-b] > 0 and dp[i-b]+1 > dp[i]:
            dp[i] = dp[i-b]+1
        if i - c >= 0 and dp[i-c] > 0 and dp[i-c]+1 > dp[i]:
            dp[i] = dp[i-c]+1

    print(dp[n])

if __name__ == "__main__":
    Main()
