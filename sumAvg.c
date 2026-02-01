#include<stdio.h>

int main()
{
    int arr[10];
    int sum = 0;
    float avg = 0.0;

    for(int i=0; i<10; i++)
    {
        printf("enter element %d : ", i+1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / 10.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
}
