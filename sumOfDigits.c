#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int temp, dig, sum;
    sum = 0; //initializing it to 0
    temp = n; 

    while(temp!=0)
    {
        dig = temp % 10; //extracting the last digit
        sum = sum + dig; //adding the previous sum and dig

        temp = temp / 10; //removing the last digit in order to extract a different number; we cannot proceed to a different number if we don't divide it by 10
    }

    printf("\nSum of digits = %d\n", sum);

    return 0;
}