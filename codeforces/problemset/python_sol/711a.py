def Main():
    n = int(input())

    seat = 0
    rows = []
    for i in range(n):
        row = list(input())
        if seat == 0:
            if row[0] == 'O' and row[1] == 'O':
                row[0] = "+"
                row[1] = "+"
                seat = 1
            elif row[3] == 'O' and row[4] == 'O':
                row[3] = "+"
                row[4] = "+"
                seat = 1        
        rows.append("".join(row))

    if seat == 0:
        print("NO")
    else:
        print("YES")
        for i in range(len(rows)):
            print(rows[i])


if __name__ == "__main__":
    Main()
