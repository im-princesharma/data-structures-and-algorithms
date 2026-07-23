/*
==================================================       
Title   : Linear Search  
Purpose : Search an element in an array. 
Working :   
1. Accept array elements.
2. Accept target value.
3. Compare each element. 
4. Display position if found.
==================================================
*/

#include <stdio.h>

int main() {  
    int arr[100];
    int size, key;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(int i = 0; i < size; i++) {

        if(arr[i] == key) {
            printf("\nElement Found at Position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("\nElement Not Found\n");
    }

    return 0;
}
