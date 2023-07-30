#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter integers to add (enter -1 to stop):\n");

    while (1) {

        ("%d", &num);

        if (num == -1) {
            break;
        }

        sum += num;
    }

    printf("The sum of the entered integers is: %d\n", sum);

    return 0;
}
