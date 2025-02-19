#include <stdio.h>

int evenCount(int);
int oddCount(int);

int main()
{
    int n;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    printf("\nThe number of Even digits: %d", evenCount(n));
    printf("\nThe number of Odd digits: %d", oddCount(n));
}

int evenCount(int n) {
    int digit = 0;
    int evenCount = 0;
    int temp = n;
    
    while(temp != 0) {
        
        digit = temp % 10;
        if(digit % 2 == 0) {
            evenCount++;
        }
        temp = temp / 10;
    }
    return evenCount;
}

int oddCount(int n) {
    int digit = 0;
    int oddCount = 0;
    int temp = n;
    
    while(temp != 0) {
        
        digit = temp % 10;
        if(digit % 2 == 1) {
            oddCount++;
        }
        temp = temp / 10;
    }
    return oddCount;
}