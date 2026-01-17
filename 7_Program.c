//Write a program for binary search on a sorted array
#include <stdio.h>
#include<stdlib.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};   // Sorted array
    int n = 5;
    int key = 30;                       // We want to search 30
    int low = 0, high = n - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at index %d\n", key, mid);
            return 0;
        }
        else if (arr[mid] < key) {
            low = mid + 1;              // Search right half
        }
        else {
            high = mid - 1;             // Search left half
        }
    }

    printf("Element %d not found\n", key);
    return 0;
}


   