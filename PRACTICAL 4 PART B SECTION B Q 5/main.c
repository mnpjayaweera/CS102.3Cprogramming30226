#include <stdio.h>

#define NORMAL_RATE_PER_HOUR 150
#define OVERTIME_RATE_PER_HOUR 200
#define OVERTIME_THRESHOLD_HOURS 40
#define MAX_EMPLOYEES 100

int main() {
    int employeeNo[MAX_EMPLOYEES];
    int hoursWorked[MAX_EMPLOYEES];
    float overtimePayment[MAX_EMPLOYEES];
    int numEmployees = 0;
    int countOvertimeExceeding4000 = 0;

    printf("Enter the Employee No and Hours Worked (Enter -999 as Employee No to end):\n");
    while (1) {
        printf("Employee No: ");
        scanf("%d", &employeeNo[numEmployees]);
        if (employeeNo[numEmployees] == -999) {
            break;
        }

        printf("Hours Worked: ");
        scanf("%d", &hoursWorked[numEmployees]);
        if (hoursWorked[numEmployees] > OVERTIME_THRESHOLD_HOURS) {
            int overtimeHours = hoursWorked[numEmployees] - OVERTIME_THRESHOLD_HOURS;
            overtimePayment[numEmployees] = OVERTIME_RATE_PER_HOUR * overtimeHours;
        } else {
            overtimePayment[numEmployees] = 0;
        }
        if (overtimePayment[numEmployees] > 4000) {
            countOvertimeExceeding4000++;
        }

        numEmployees++;
    }

    printf("\nEmployee No\tOver Time Payment\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("%d\t\t%.2f\n", employeeNo[i], overtimePayment[i]);
    }

    float percentageExceeding4000 = (float)countOvertimeExceeding4000 / numEmployees * 100;
    printf("\nPercentage of Employees whose Over Time Payment exceeds Rs. 4000/-: %.2f%%\n", percentageExceeding4000);

    return 0;
}
