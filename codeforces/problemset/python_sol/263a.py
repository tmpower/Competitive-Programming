def Main():
    matr = [0]*5
    matr[0] = [0]*5
    matr[0] = list(map(int, input().split()))
    matr[1] = [0]*5
    matr[1] = list(map(int, input().split()))
    matr[2] = [0]*5
    matr[2] = list(map(int, input().split()))
    matr[3] = [0]*5
    matr[3] = list(map(int, input().split()))
    matr[4] = [0]*5
    matr[4] = list(map(int, input().split()))

    for i in range(5):
        for j in range(5):
            if matr[i][j] == 1:
                x = i+1
                y = j+1

    print(abs(x-3)+abs(y-3))

if __name__ == "__main__":
    Main()
