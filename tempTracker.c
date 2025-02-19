#include <stdio.h>

int findMaxTemp(int *arr)
{
    int maximum = -9999;
    
    for(int i = 0; i < 7; i++)
    {
        if(arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    return maximum;
}

int findMinTemp(int *arr)
{
    int minimum = 9999;
    
    for(int j = 0; j < 7; j++)
    {
        if(arr[j] < minimum)
        {
            minimum = arr[j];
        }
    }
    return minimum;
}

int main()
{
    int temps[7];
    
    printf("Enter the temperatures of the week:\n");
    for(int x = 0; x < 7; x++)
    {
        scanf("%d", &temps[x]);
    }
    
    printf("Temperatures for the week:\n");
    for(int x = 0; x < 7; x++)
    {
        printf("%d ", temps[x]);
    }
    int newMax = findMaxTemp(temps);
    int newMin = findMinTemp(temps);
    printf("\nMinimum temperature: %d", newMin);
    printf("\nMaximum temperature: %d", newMax);
    
    return 0;
}