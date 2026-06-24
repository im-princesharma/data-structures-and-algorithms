/*
==================================================
Title   : Array Deletion
Purpose : Delete an element from a specified position.
Working :
1. Accept array elements from the user.
2. Accept the position to delete.
3. Shift elements left.
4. Reduce array size.
5. Display updated array.
==================================================
*/

#include <stdio.h>

int main() {
    int arr[100];
    int size, position;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Current Array:\n");

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter position to delete (1-%d): ", size);
    scanf("%d", &position);

    if(position < 1 || position > size) {
        printf("Invalid position.\n");
        return 0;
    }

    for(int i = position - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("\nArray After Deletion:\n");

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nTotal Elements: %d\n", size);

    return 0;
}
