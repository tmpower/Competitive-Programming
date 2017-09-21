def Main():
    name1 = input()
    name2 = input()
    name3 = input()

    count1 = [0]*26
    count2 = [0]*26
    for i in range(len(name1)):
        count1[ord(name1[i]) - ord('A')]+=1
    for i in range(len(name2)):
        count1[ord(name2[i]) - ord('A')]+=1
    for i in range(len(name3)):
        count2[ord(name3[i]) - ord('A')]+=1

    ans = 1
    for i in range(26):
        if count1[i] != count2[i]:
            ans = 0
            break
    
    if ans == 0:
        print("NO")
    else:
        print("YES")


if __name__ == "__main__":
    Main()
