package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	var length int
	fmt.Print("Enter password length: ")
	fmt.Scan(&length)

	if length <= 0 {
		fmt.Println("Length must be greater than 0")
		return
	}

	lower := "abcdefghijklmnopqrstuvwxyz"
	upper := "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	digits := "0123456789"
	special := "!@#$%^&*()-_=+[]{}<>?/|"

	all := lower + upper + digits + special

	rand.Seed(time.Now().UnixNano())

	password := make([]byte, length)

	for i := 0; i < length; i++ {
		randomIndex := rand.Intn(len(all))
		password[i] = all[randomIndex]
	}

	fmt.Println("Generated password:", string(password))
}
