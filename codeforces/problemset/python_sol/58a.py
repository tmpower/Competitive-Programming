def Main():
    word = input()

    x = [0]*5
    for i in range(len(word)):

        if x[0] == 0:
            if word[i] == 'h':
                x[0] = 1
        elif x[1] == 0:
            if word[i] == 'e':
                x[1] = 1
        elif x[2] == 0:
            if word[i] == 'l':
                x[2] = 1
        elif x[3] == 0:
            if word[i] == 'l':
                x[3] = 1
        elif x[4] == 0:
            if word[i] == 'o':
                x[4] = 1
    
    if x[4] == 1:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    Main()
