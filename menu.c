#include <stdio.h>
int main() {
    int choice, quantity;
    float total_bill = 0.0;
    do {
        printf("\nMenu:\n");
        printf("1. Coffee - 150 Rs\n");
        printf("2. Cold Coffee - 200 Rs\n");
        printf("3. Tea - 100 Rs\n");
        printf("4. Exit\n");
        printf("Enter your choice (1 to 4): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                total_bill += 150 * quantity;
                printf("Selected: Coffee\n");
                break;
            case 2:
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                total_bill += 200 * quantity;
                printf("Selected: Cold Coffee\n");
                break;
            case 3:
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                total_bill += 100 * quantity;
                printf("Selected: Tea\n");
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please select a valid option\n");
                break;
        }
    } while (choice < 4);
    printf("Total bill: %.2f Rs\n", total_bill);
    return 0;
}