def Main():
    n = int(input())
    arr = list(map(int, input().split()))

    teams = [[], [], []]
    for i in range(n):
        x = arr[i]
        teams[x-1].append(i+1)
    
    n_teams = min(len(teams[0]), len(teams[1]), len(teams[2]))

    print(n_teams)
    for i in range(n_teams):
        print(teams[0][i], teams[1][i], teams[2][i])


if __name__ == "__main__":
    Main()
