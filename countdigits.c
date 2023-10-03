#include <stdio.h>

int main(){
    /*reads users input and counts digits*/
    int numbers;
    printf("\nEnter a number:");
    scanf("%d",&numbers);
    if (numbers < 10) {
        printf("\nNumber has 1 digit\n");
    }
    else if (numbers >= 10 && numbers < 100){
        printf("\nNumber has 2 digits\n");
    }
    else if (numbers >= 100 && numbers < 1000) {
        printf("\nNumber has 3 digits\n");
    }
    else {
        printf("\nNumber is 1K or more\n");
    }
}   