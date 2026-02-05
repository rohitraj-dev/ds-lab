#include<stdio.h>

int main()
{
    // transpose a matrix
    
    int arr[2][2];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("enter element [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=1; i<2; i++) // runs for the no. of rows times
    {
        for(int j=0; j<i; j++) // runs from o to i-1
        {
            int temp = arr[i][j];  // storing the value in temp
            arr[i][j] = arr[j][i]; // assigning the transposed value
            arr[j][i] = temp;  // at transposed position, putting the above element
        }
    }
    printf("transposed matrix is : \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}