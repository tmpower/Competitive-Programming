def Main():
    n = int(input())
    strr = input()

    last = ""
    for c in strr:
        if len(last) == 0 or last.endswith(c):
            last += c
        else:
            last = last[:-1]
    
    print(len(last))

if __name__ == "__main__":
    Main()
