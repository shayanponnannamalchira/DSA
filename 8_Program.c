//Searching the student enrollment number in an array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Entering the number of elements
    int n;
    printf("Enter the number of Students: ");
    scanf("%d", &n);

    int arr[n];

    //Entering the elements of the array
    for(int i = 0; i < n; i++)
    {
        printf("Enter the student enrollment number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    //Displaying the emement
    printf("The students enrollment number:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

       // Element to search
    int key, i, found = 0;
    printf("\nEnter the Enrollment to be Serached: ");
    scanf("%d", &key);


    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)     // Compare each element with key
        {
            printf("Student %d found at position %d\n", key, i + 1);
            found = 1;  
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