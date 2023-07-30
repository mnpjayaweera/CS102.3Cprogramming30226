#include <stdio.h>

int main() {
    float prices[10];
    float total_price = 0.0;
    int count_greater_than_200 = 0;

    printf("Enter the prices of 10 items:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &prices[i]);
        total_price += prices[i];
        if (prices[i] > 200.0) {
            count_greater_than_200++;
        }
    }
    float average_price = total_price / 10;

    printf("Average Price of an Item: %.2f\n", average_price);
    printf("Number of items with price greater than 200: %d\n", count_greater_than_200);

    return 0;
}
