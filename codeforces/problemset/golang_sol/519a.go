package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)

	wp := 0
	bp := 0
	for i := 0; i < 8; i++ {
		scanner.Scan()
		text := scanner.Text()

		for j := 0; j < 8; j++ {
			if text[j] == 'Q' {
				wp += 9
			} else if text[j] == 'R' {
				wp += 5
			} else if text[j] == 'B' {
				wp += 3
			} else if text[j] == 'N' {
				wp += 3
			} else if text[j] == 'P' {
				wp++
			} else if text[j] == 'q' {
				bp += 9
			} else if text[j] == 'r' {
				bp += 5
			} else if text[j] == 'b' {
				bp += 3
			} else if text[j] == 'n' {
				bp += 3
			} else if text[j] == 'p' {
				bp++
			}
		}
	}

	if wp > bp {
		fmt.Println("White")
	} else if bp > wp {
		fmt.Println("Black")
	} else {
		fmt.Println("Draw")
	}
}
