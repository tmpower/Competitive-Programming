package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

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

	var n, j int
	var ox []float64

	n = readInt()
	for i := 0; i < n; i++ {
		j = readInt()
		ox = append(ox, float64(j))
	}

	fmt.Fprintln(writer, int64(ox[1]-ox[0]), int64(ox[n-1]-ox[0]))
	for i := 1; i < n-1; i++ {
		fmt.Fprintln(writer, int64(math.Min(ox[i+1]-ox[i], ox[i]-ox[i-1])), int64(math.Max(ox[n-1]-ox[i], ox[i]-ox[0])))
	}
	fmt.Fprintln(writer, int64(ox[n-1]-ox[n-2]), int64(ox[n-1]-ox[0]))
}
