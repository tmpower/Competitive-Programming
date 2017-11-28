def Main():
    mov = input()
    word = input()

    line1 = "qwertyuiopasdfghjkl;zxcvbnm,./"
    ans = ""
    for c in word:
        if mov == 'R':
            ans += line1[line1.find(c)-1]
        else:
            ans += line1[line1.find(c)+1]

    print(ans)

if __name__ == "__main__":
    Main()
