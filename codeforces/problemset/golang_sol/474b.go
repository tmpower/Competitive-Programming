package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

type Pairs struct {
	l int
	r int
}

var scanner = bufio.NewScanner(os.Stdin)
var writer = bufio.NewWriter(os.Stdout)

func readInt() int {
	scanner.Scan()
	ans, _ := strconv.Atoi(scanner.Text())
	return ans
}

func main() {
	defer writer.Flush()
	scanner.Split(bufio.ScanWords)
	var n, m int

	n = readInt()
	ranges := make([]Pairs, n)

	var curr, lasti int
	curr = readInt()
	ranges[0] = Pairs{1, curr}
	lasti = curr
	for i := 1; i < n; i++ {
		curr = readInt()
		ranges[i] = Pairs{lasti + ranges[i-1].l, curr + ranges[i-1].r}
		lasti = curr
	}

	m = readInt()
	var ll, rr, mid, q int
	for i := 0; i < m; i++ {
		q = readInt()

		ll = 0
		rr = n
		for ll <= rr {
			mid = (ll + rr) / 2
			if ranges[mid].l <= q && q <= ranges[mid].r {
				fmt.Fprintln(writer, mid+1)
				break
			}
			if ranges[mid].r < q {
				ll = mid + 1
			} else {
				rr = mid - 1
			}
		}
	}
}
