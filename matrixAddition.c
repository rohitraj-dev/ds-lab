#include<stdio.h>

int main()
{
    // add two matrices 
    
    int ar[2][2];
    int arr[2][2];
    // int sum1 = 0;
    // int sum2 = 0;
    int arrr[2][2];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("enter element [%d][%d] : ", i, j);
            scanf("%d", &ar[i][j]);
            //sum1 = sum1 + ar[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("enter element [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
            //sum2 = sum2 + arr[i][j];
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            // printf("enter element [%d][%d] : ", i, j);
            // scanf("%d", &ar[i][j]);
            arrr[i][j] = arr[i][j] + ar[i][j];
        }
    }
    // printf("sum of all elements = %d", sum);
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ", arrr[i][j]);
            
            // scanf("%d", &ar[i][j]);
            // sum = sum + ar[i][j];
        }
        printf("\n");
    }
    
}