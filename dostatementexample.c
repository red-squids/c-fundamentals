#include <stdio.h>

int main(){
    int i = 10;
    do {
        printf("T minus %d and counting\n", i--);
    } while (i > 0);
    printf("Liftoff!\n");
}