/*
==================================================
Title   : Frequency of Elements
Purpose : Count frequency of each element in array.
Working :
1. Accept array elements.
2. Compare each element with others.
3. Count occurrences.
4. Display frequency of every element.
==================================================
*/

#include <stdio.h>

int main() {

    int arr[100];
    int visited[100] = {0};
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nFrequency Table:\n");

    for(int i = 0; i < size; i++) {

        if(visited[i] == 1) {
            continue;
        }

        int count = 1;

        for(int j = i + 1; j < size; j++) {

            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d time(s)\n", arr[i], count);
    }

    return 0;
}
