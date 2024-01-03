package main

import "fmt"

func main() {
	var N, S, K int
	fmt.Scan(&N, &S, &K)

	var ans int
	for i := 0; i < N; i++ {
		var p, q int
		fmt.Scan(&p, &q)
		ans += p * q
	}
	if ans < S {
		ans += K
	}

	fmt.Println(ans)
}