/*
==================================================
Title   : Array Insertion
Purpose : Insert an element at a specified position.
Working :
1. Accept array elements.
2. Accept position and value.
3. Shift elements to right.
4. Insert new element.
5. Display updated array.
==================================================
*/

#include <stdio.h>

int main() {
    int arr[100];
    int size, position, value;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert: ");
    scanf("%d", &position);

    printf("Enter value: ");
    scanf("%d", &value);

    for(int i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = value;
    size++;

    printf("\nArray After Insertion:\n");

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
