/*
==================================================
Title   : Second Largest Element
Purpose : Find the second largest element in an array.
Working :
1. Accept array elements from user.
2. Find largest and second largest values.
3. Update values during traversal.
4. Display largest and second largest elements.
==================================================
*/

#include <stdio.h>

int main() {

    int arr[100];
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    if(size < 2) {
        printf("At least 2 elements are required.\n");
        return 0;
    }

    printf("Enter %d elements:\n", size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 1; i < size; i++) {

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("\nLargest Element         : %d\n", largest);
    printf("Second Largest Element  : %d\n", secondLargest);

    return 0;
}

