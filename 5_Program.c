//Linear Search Algorithm in C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int key, i, found = 0;

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("Element %d not found in the array\n", key);
    }
    return 0;
}