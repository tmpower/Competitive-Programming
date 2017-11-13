package main

import (
	"fmt"
)

func main() {
	var n int
	var a1, a2, a3 int // cups
	var b1, b2, b3 int // medals

	fmt.Scan(&a1, &a2, &a3)
	fmt.Scan(&b1, &b2, &b3)
	fmt.Scan(&n)

	if (a1+a2+a3+4)/5+(b1+b2+b3+9)/10 > n {
		fmt.Println("NO")
	} else {
		fmt.Println("YES")
	}
}
