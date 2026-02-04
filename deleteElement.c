#include <stdio.h>

int main() 
{
    // delete an element from an array

    int arr[100], n, pos;

    printf("Enter number of elements: "); // Input size of array
    scanf("%d", &n);

    printf("Enter %d elements:\n", n); // Input array elements
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (1 to %d): ", n); // Input position to delete
    scanf("%d", &pos);

    if (pos < 1 || pos > n) // Validate position
    {
        printf("Invalid position!\n"); 
        return 0;
    }

    for (int i = pos - 1; i < n - 1; i++) // Shift elements to the left
    {
        arr[i] = arr[i + 1];
    }

    n--;  // Reduce size

    printf("Array after deletion:\n"); // Print updated array
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    // int i=4;
    // printf("\n", arr[i]);
    //return 0;
}