#include <stdio.h>

int main() {
    int arr[10];
    int evenCount = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The entered array is: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
    }

    printf("\nTotal even numbers in the array: %d\n", evenCount);

    return 0;
}
