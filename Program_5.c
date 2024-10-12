//https://t.me/PHOENIXYTM
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float interest;
    int choice;

    printf("Select the type of interest calculation:\n");
    printf("1. Simple Interest\n");
    printf("2. Compound Interest\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Input for principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    //
    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Switch case for choice
    switch (choice) {
        case 1:
            interest = (principal * rate * time) / 100;
            printf("Simple Interest = %.2f\n", interest);
            break;
        case 2: //https://t.me/PHOENIXYTM
            interest = principal * pow((1 + rate / 100), time) - principal;
            printf("Compound Interest = %.2f\n", interest);
            break;
        default:
            printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
