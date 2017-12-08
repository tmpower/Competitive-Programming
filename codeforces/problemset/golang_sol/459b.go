package main

import (
	"fmt"
	"sort"
	"bufio"
	"os"
	"strconv"
)

var scanner = bufio.NewScanner(os.Stdin)
func readInt() int {
	scanner.Scan()
	ans, _ := strconv.Atoi(scanner.Text())
	return ans
}

func main() {
	scanner.Split(bufio.ScanWords)

	n := readInt()
	var x int
	tmap := make(map[int]int)
	for i := 0; i < n; i++ {
		x = readInt()
		tmap[x] = tmap[x] + 1
	}

	type mapii struct {
		k int
		v int
	}
	var bmap []mapii
	
	for k, v := range tmap {
		bmap = append(bmap, mapii{k, v})
	}

	sort.Slice(bmap, func(i, j int) bool {
		return bmap[i].k < bmap[j].k
	})

	if len(bmap) != 1 {
		fmt.Println(bmap[len(bmap)-1].k - bmap[0].k, int64(bmap[len(bmap)-1].v) * int64(bmap[0].v))
	} else {
		fmt.Println(0, (int64(bmap[0].v) * int64(bmap[0].v-1))/2)
	}
}
