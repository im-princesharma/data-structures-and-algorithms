/*
==================================================
Title   : Merge Two Arrays
Purpose : Merge two arrays into a single array.
Working :
1. Accept elements of two arrays.
2. Copy first array into merged array.
3. Copy second array after first array.
4. Display merged array.
==================================================
*/

#include <stdio.h>

int main() {

    int arr1[50], arr2[50], merged[100];
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");

    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");

    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for(int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("\nMerged Array:\n");

    for(int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");

    return 0;
}
