def Main():
    word = input()
    
    if word.find("H") > -1 or word.find("Q") > -1 or word.find("9") > -1:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    Main()
