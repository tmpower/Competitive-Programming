def Main():
    team = input()

    mcon = 1
    for i in range(len(team)-1):
        if team[i] == team[i+1]:
            mcon+=1
        else:
            mcon = 1

        if mcon == 7:
            break
    
    if mcon == 7:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    Main()