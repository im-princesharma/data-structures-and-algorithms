/*
==================================================
Title   : Array Reverse
Purpose : Reverse the order of array elements.
Working :
1. Accept array elements.
2. Swap first and last elements.
3. Continue swapping towards center.
4. Display reversed array.
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

    for(int i = 0; i < size / 2; i++) {

        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    printf("\n\nReversed Array:\n");

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
