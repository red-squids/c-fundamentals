#include <stdio.h>

int main(void){
    int n, sum = 0;
    printf("This program sums a series of integers.\n");
    printf("Enter a series of numbers terminated by 0: \n");
    scanf("%d", &n); /*Reads the first integer and proceeds to the while conditional check*/
    while (n != 0) {
        sum += n;
        scanf("%d", &n); /*This statement allows the program to read and accumulate a series of ints until it enters 0*/
    }
    printf("The sum is: %d\n", sum);
    
    return 0;
}