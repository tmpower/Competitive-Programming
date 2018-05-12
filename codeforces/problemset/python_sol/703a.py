def Main():
    n = int(input())
    mishka_count = 0
    chris_count = 0
    for i in range(n):
        m, c = map(int, input().split())
        if m > c:
            mishka_count += 1
        elif c > m:
            chris_count += 1
    
    if mishka_count > chris_count:
        print("Mishka")
    elif chris_count > mishka_count:
        print("Chris")
    else:
        print("Friendship is magic!^^")


if __name__ == "__main__":
    Main()
