/*
==================================================
Title   : Array Rotation
Purpose : Rotate array left by one position.
Working :
1. Store first element.
2. Shift all remaining elements left.
3. Place first element at last position.
4. Display rotated array.
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

    printf("\nOriginal Array:\n");

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    int first = arr[0];

    for(int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[size - 1] = first;

    printf("\n\nArray After Left Rotation:\n");

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}