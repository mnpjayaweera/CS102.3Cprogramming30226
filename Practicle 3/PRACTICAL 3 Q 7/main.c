#include <stdio.h>
#include <stdlib.h>

int main()
{
    float basicSalary, monthlySales, grossRemuneration;
    char city;

    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter the monthly sales: ");
    scanf("%f", &monthlySales);

    printf("Enter the city (C for Colombo): ");
    scanf(" %c", &city);
    float additionalAllowance = 0;
    if (monthlySales >= 25000 && monthlySales < 50000) {
        additionalAllowance = basicSalary * 0.1;
    } else if (monthlySales >= 50000) {
        additionalAllowance = basicSalary * 0.1 + 2500;
    }
    float bonusPercentage = 0;
    if (monthlySales >= 0 && monthlySales <= 25000) {
        bonusPercentage = 10;
    } else if (monthlySales > 25000 && monthlySales <= 50000) {
        bonusPercentage = 12;
    } else if (monthlySales > 50000) {
        bonusPercentage = 15;
    }
    grossRemuneration = basicSalary + additionalAllowance + (monthlySales * bonusPercentage / 100);
    if (city == 'C') {
        grossRemuneration += 2500;
    }

    printf("Gross Monthly Remuneration: Rs. %.2f\n", grossRemuneration);
}
