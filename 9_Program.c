#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Entering the number of elements
    int n;
    printf("Enter the number of Books: ");

    scanf("%d", &n);

    int arr[n];

       //Entering the elements of the array
    for(int i = 0; i < n; i++)
    {
        printf("Enter the %d accesion(new books) number: ", i + 1);
        scanf("%d", &arr[i]);
    }
      // Element to search
    int key, i, found = 0;
    printf("\nEnter the book to be searched: ");
    scanf("%d", &key);

    printf("\nSearching...\n");

    
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)     // Compare each element with key
        {
            printf("Book available!\n");
            printf("Book Number %d\n", key);
            break;
        }
    }
  //If not found
    if(!found)
    {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}


