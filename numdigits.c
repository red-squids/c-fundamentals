#include <stdio.h>

int main(){
    int digits = 0, n;
    printf("Enter a nonnegative number: ");
    scanf("%d",&n);

    do {
        n /= 10; /*Similar to increment/decrement compound operations*/
        digits++;
    } while (n > 0);

    printf("The number has %d digit(s).\n", digits);

    return 0;
}