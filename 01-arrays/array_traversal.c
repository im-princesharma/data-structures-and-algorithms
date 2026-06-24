/*
==================================================
Title   : Array Traversal
Purpose : Display all elements of an array.
Working :
1. Accept array elements from user.
2. Traverse array using loop.
3. Display all elements.
==================================================
*/

#include <stdio.h>

int main() {
    int arr[100];
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray Elements:\n");

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}