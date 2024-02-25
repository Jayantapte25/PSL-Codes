#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; 
    int *dynamicArray; // Pointer to the dynamically allocated array

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    dynamicArray = (int *)malloc(n * sizeof(int));

    if (dynamicArray == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        dynamicArray[i] = i * 2; 
    }

    printf("Dynamic Array Elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    free(dynamicArray);

    return 0;
}
