def Main():
    n = int(input())
    strr = input()

    ab = [0] * 26
    ans = 0
    for i in range(len(strr)):
        if strr[i].isupper() == True:
            if ab[ord(strr[i]) - ord('A')] == 0:
                ab[ord(strr[i]) - ord('A')] = 1
                ans+=1
        else:
            if ab[ord(strr[i]) - ord('a')] == 0:
                ab[ord(strr[i]) - ord('a')] = 1
                ans+=1

    if ans < 26:
        print("NO")
    else:
        print("YES")

if __name__ == "__main__":
    Main()
