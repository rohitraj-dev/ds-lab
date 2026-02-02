// #include<stdio.h>

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int element;
//     int idx;

//     printf("enter element ");
//     scanf("%d", &element);
//     printf("enter index ");
//     scanf("%d", &idx);

//     arr[idx] = element;

//     for(int i=0; i<5; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

#include <stdio.h>

int main() {
    int arr[100], n, pos, value;

    printf("Enter number of elements: "); // Input size of array
    scanf("%d", &n);

    printf("Enter %d elements:\n", n); // Input array elements
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (1 to %d): ", n + 1); // Input position and value
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    if (pos < 1 || pos > n + 1) // Check for valid position
    {
        printf("Invalid position!\n"); 
        return 0;
    }

    for (int i = n; i >= pos; i--) // Shift elements to the right
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value; // Insert element
    n++;

    printf("Array after insertion:\n"); // Print updated array
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    //return 0;
}