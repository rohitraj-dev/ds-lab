#include<stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int target;
    int flag = 0;

    //printf("%d", sizeof(arr));
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("enter target element : ");
    scanf("%d", &target);

    for(int i=0; i<size; i++)
    {
        if(arr[i] == target)
        {
            flag = 1;
            break;
        }
    }
    // for(int i=0; i<5; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    if(flag == 1)
    {
        printf("element found");
    }
    else
    {
        printf("element not found");
    }
}
