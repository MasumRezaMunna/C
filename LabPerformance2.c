#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n], copy[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        copy[i] = arr[i];
    }

    printf("Copied array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", copy[i]);
    }

    int found = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == 7)
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("\n7 is present in the array.\n");
    else
        printf("\n7 is not present in the array.\n");

    int largest = arr[0];
    int second = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    printf("Second largest element = %d\n", second);

    return 0;
}