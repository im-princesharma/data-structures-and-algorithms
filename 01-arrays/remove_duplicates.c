/*
==================================================
Title   : Remove Duplicate Elements
Purpose : Remove duplicate values from an array.
Working :
1. Accept array elements.
2. Compare elements for duplicates.
3. Remove duplicate values by shifting.
4. Display array with unique elements.
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

    for(int i = 0; i < size; i++) {

        for(int j = i + 1; j < size; j++) {

            if(arr[i] == arr[j]) {

                for(int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }

                size--;
                j--;
            }
        }
    }

    printf("\nArray After Removing Duplicates:\n");

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nTotal Unique Elements: %d\n", size);

    return 0;
}
