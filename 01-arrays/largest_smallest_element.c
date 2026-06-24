/*
==================================================
Title   : Largest and Smallest Element
Purpose : Find largest and smallest values in array.
Working :
1. Accept array elements.
2. Assume first element as largest and smallest.
3. Compare remaining elements.
4. Display largest and smallest values.
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

    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 1; i < size; i++) {

        if(arr[i] > largest) {
            largest = arr[i];
        }

        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("\nLargest Element  : %d\n", largest);
    printf("Smallest Element : %d\n", smallest);

    return 0;
}
