#include <stdio.h>

void popArray(int *arr, int size);
int findMax(int *arr, int size);

int maximum = -9999;

int main()
{
    int size; 
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter %d elements:\n", size);
    popArray(arr, size);
    
    int newVal = findMax(arr, size);
    
    printf("The maximum element in the array is: %d", newVal);
}

void popArray(int *arr, int size) {
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int findMax(int *arr, int size)
{
    for(int j = 0; j < size; j++)
    {
        if(arr[j] > maximum)
        {
            maximum = arr[j];
        }
    }
    return maximum;
}