#include <stdio.h>

int main(void) {
    double bill, tax_rate, tip_rate, tax, tip, total, share;
    int people;

    printf("Enter pre-tax bill amount: ");
    scanf("%lf", &bill);

    printf("Enter sales-tax percentage: ");
    scanf("%lf", &tax_rate);

    printf("Enter tip rate as a percentage: ");
    scanf("%lf", &tip_rate);

    printf("Enter the number of people: ");
    scanf("%d", &people);

    tax = bill * tax_rate / 100.0;
    tip = bill * tip_rate / 100.0;
    total = bill + tax + tip;
    share = total / people;

    printf("Bill: $%.2f\n", bill);
    printf("Tax: $%.2f\n", tax);
    printf("Tip: $%.2f\n", tip);
    printf("Total: $%.2f\n", total);
    printf("Each person pays: $%.2f\n", share);

    return 0;
}
