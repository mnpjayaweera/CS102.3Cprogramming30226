#include <stdio.h>
#include <stdlib.h>

int main()
{
#include <stdio.h>

int main() {
    int n = 10;
    int first = 0, second = 1;
    int next;

    printf("The Fibonacci sequence for the first 10 numbers:\n");
    printf("%d\n%d\n", first, second);

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d\n", next);
        first = second;
        second = next;
    }

    return 0;
}

}
