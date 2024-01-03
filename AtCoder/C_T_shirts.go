package main

import "fmt"

func main() {
	var n, m int
	fmt.Scan(&n, &m)
	var s string
	fmt.Scan(&s)
	s += "0"

	mx, ones, twos := 0, 0, 0
	for i := 0; i <= n; i++ {
		if s[i] == '0' {
			mx = max(mx, twos + max(0, ones - m))
			ones = 0
			twos = 0
		} else if s[i] == '1' {
			ones++
		} else {
			twos++
		}
	}
	fmt.Println(mx)
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}