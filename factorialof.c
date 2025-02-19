#include <stdio.h>

int main() {
    int product = 1; 

    for (int i = 1; i <= 5; i++) {
        product = product * i;  
    }

    printf("The product of numbers from 1 to 5 is: %d\n", product);

    return 0;
}