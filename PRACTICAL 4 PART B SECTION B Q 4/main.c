#include <stdio.h>

int main() {
    int employeeNo;
    float basicSalary;
    int countSalaryGreaterThan5000 = 0;

    printf("Enter the Employee No and Basic Salary (Enter -999 to end):\n");

    while (1) {
        printf("Employee No: ");
        scanf("%d", &employeeNo);
        if (employeeNo == -999) {
            break;
        }

        printf("Basic Salary: ");
        scanf("%f", &basicSalary);
        if (basicSalary >= 5000) {
            countSalaryGreaterThan5000++;
        }
    }

    printf("Number of Employees with Basic Salary >= 5000: %d\n", countSalaryGreaterThan5000);

    return 0;
}
