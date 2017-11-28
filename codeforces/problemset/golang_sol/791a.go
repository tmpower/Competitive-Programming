package main

import (
	"fmt"
)

func main() {
	var n, m int
	fmt.Scan(&n, &m)

	year := 0
	for n <= m {
		n = n * 3
		m = m * 2
		year++
	}
	fmt.Println(year)
}
