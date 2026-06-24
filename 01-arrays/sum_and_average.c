/*
==================================================
Title   : Sum and Average
Purpose : Calculate sum and average of array elements.
Working :
1. Accept array elements.
2. Calculate total sum.
3. Calculate average.
4. Display results.
==================================================
*/

#include <stdio.h>

int main() {
    int arr[100];
    int size;
    int sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / size;

    printf("\nSum of Elements     : %d\n", sum);
    printf("Average of Elements : %.2f\n", average);

    return 0;
}
