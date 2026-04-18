#include <stdio.h>
#include <stdlib.h>

void printarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{ 
    int size = 5;
    int *arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) return 1; // Good practice to check malloc

    arr[0] = 42;
    for(int i = 1; i < size; i++) arr[i] = 0; // Initialize rest

    int arr2[5] = {1, 2, 3, 4, 5};

    printarray(arr, size);
    printarray(arr2, 5);

    free(arr);
    return 0;   
}