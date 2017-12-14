package main

import (
	"math"
	"fmt"
)

func main() {
	var x1, y1, x2, y2, xsize float64
	
	fmt.Scan(&x1, &y1, &x2, &y2)

	if x1 == x2 {
		if y1 == y2 {
			fmt.Println(-1)
		} else {
			xsize = math.Abs(y1-y2)
			fmt.Println(x1+xsize, y1, x2+xsize, y2)
		}
	} else {
		if y1 == y2 {
			xsize = math.Abs(x1-x2)
			fmt.Println(x1, y1+xsize, x2, y2+xsize)
		} else {
			if math.Abs(x1-x2) == math.Abs(y1-y2) {
				fmt.Println(x1, y2, x2, y1)
			} else {
				fmt.Println(-1)
			}
		}
	}
}
