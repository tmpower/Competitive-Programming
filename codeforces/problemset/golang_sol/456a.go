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

func main() {
	scanner := bufio.NewScanner(os.Stdin)

	scanner.Split(bufio.ScanWords)

	n := readInt(scanner)

	flag := 0
	for i := 0; i < n; i++ {
		key := readInt(scanner)
		value := readInt(scanner)

		if key != value {
			flag = -1
			break
		}
	}

	if flag == -1 {
		fmt.Println("Happy Alex")
	} else {
		fmt.Println("Poor Alex")
	}
}
