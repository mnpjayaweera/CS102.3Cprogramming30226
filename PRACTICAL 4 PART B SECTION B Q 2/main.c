#include <stdio.h>

int main() {
    int marks[10];
    int sum = 0;
    int max_marks, min_marks;

    printf("Enter the marks of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
        if (i == 0) {
            max_marks = marks[i];
            min_marks = marks[i];
        } else {
            if (marks[i] > max_marks) {
                max_marks = marks[i];
            }
            if (marks[i] < min_marks) {
                min_marks = marks[i];
            }
        }
    }
    float average_marks = (float)sum / 10;

    printf("Maximum Marks: %d\n", max_marks);
    printf("Minimum Marks: %d\n", min_marks);
    printf("Average Marks: %.2f\n", average_marks);

    return 0;
}
