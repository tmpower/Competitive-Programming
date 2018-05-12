package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func readInt(scanner *bufio.Scanner) int {
	scanner.Scan()
	ans, _ := strconv.Atoi(scanner.Text())
	return ans
}

// func readWord(scanner *bufio.Scanner) string {
// 	scanner.Scan()
// 	return scanner.Text()
// }

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Split(bufio.ScanWords)

	// examStr := readWord(scanner)
	var examStr string
	fmt.Scanln(&examStr)
	// fmt.Scanf("%s", examStr)

	rsum := make([]int, len(examStr)+1)

	// pre-calculation
	if examStr[0] == examStr[1] {
		rsum[1] = 1
	}
	for i := 1; i < len(examStr)-1; i++ {
		rsum[i+1] = rsum[i]
		if examStr[i] == examStr[i+1] {
			rsum[i+1] += 1
		}
	}
	rsum[len(examStr)] = rsum[len(examStr)-1]

	// response to request
	// n := readInt(scanner)
	var n int
	fmt.Scanln(&n)
	for i := 0; i < n; i++ {
		l := readInt(scanner)
		r := readInt(scanner)

		// fmt.Scanln(&l, &r)

		fmt.Println(rsum[r-1] - rsum[l-1])
	}
}
