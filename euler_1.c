#include <stdio.h>
int main(){
    int total   = 0;
    int counter = 2;
    while (counter < 1000){
        if(counter % 3 == 0 || counter % 5 == 0){
            total += counter;
        }
        counter++;
    }

    printf("%d\n", total);
    return 0;
}