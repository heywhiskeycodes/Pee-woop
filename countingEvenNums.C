#include <stdio.h>

int main() {
    
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int evenCount = 0;
    int digit = 0;
    int temp = num;
    
    while(temp != 0) {
        
        digit = temp % 10;
        if(digit % 2 == 0) {
           evenCount++;
        }
        temp = temp / 10;
    }
    
    printf("\nThe number of even digits of %d is: %d", num, evenCount);
}