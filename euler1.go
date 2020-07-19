package main
import "fmt"

func main(){
	var total 	= 0
	for counter := 2; counter < 1000; counter++{
		if counter % 3 == 0 || counter % 5 == 0{
			total += counter
		}
	}

	fmt.Println(total)
}