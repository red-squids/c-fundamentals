#include <stdio.h>

int main(){
/*Prints out a table of squares*/
int i,n;

printf("\nThis binary prints a table of squares.\n");
printf("\nEnter a number of entries in the table:");
scanf("%d", &n);

i = 1;
while (i <= n) {
    /*The field width is specified by %10d for the decimal*/
    /*The arithmetic function is evaluated before the formatting portion of the printf statement.*/
    printf("%10d%10d\n", i, i * i);
    i++;
}
return 0;
}