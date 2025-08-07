package main

import (
	"fmt"
)

func SortMyString(s string) string {
	var par, imp string

	for i := 0; i < len(s); i++ {
		if i%2 == 0 {
			//fmt.Printf("i: %v s[i]: %v -- Par \n", i, s[i])
			par += string(s[i])
		} else {
			//fmt.Printf("i: %v s[i]: %v -- Impar \n", i, s[i])
			imp += string(s[i])
		}
	}
	
	par += " " + imp

	return par
}

func main() {
	fmt.Println(SortMyString("CodeWars"))
}
