#include <stdio.h>

int main() {
    int mainChoice, subChoice, itemChoice;
    long totalBill = 0; // Tracks the total cost of the order

    printf("========== Welcome to The Cozy Bean Cafe ==========\n");

    // Main Menu Loop
    do {
        printf("\n--- Main Menu ---\n");
        printf("1. Beverages\n2. Snacks\n3. View Bill & Exit\n");
        printf("Please select a category: ");
        scanf("%d", &mainChoice);

        switch (mainChoice) {
            case 1: // Beverages Category
                do {
                    printf("\n--- Beverages ---\n");
                    printf("1. Hot Coffees\n2. Cold Drinks\n3. Back to Main Menu\n");
                    printf("Select an option: ");
                    scanf("%d", &subChoice);

                    switch (subChoice) {
                        case 1: // Hot Coffees
                            printf("\n-- Hot Coffees --\n");
                            printf("1. Espresso ......... 150.00\n2. Cappuccino ....... 200.00\n3. Hazelnut Latte ... 250.00\n");
                            printf("Choose your coffee: ");
                            scanf("%d", &itemChoice);
                            
                            switch (itemChoice) {
                                case 1: 
                                    printf("-> Added Espresso (150.00)\n"); 
                                    totalBill += 150; 
                                    break;
                                case 2: 
                                    printf("-> Added Cappuccino (200.00)\n"); 
                                    totalBill += 200; 
                                    break;
                                case 3: 
                                    printf("-> Added Hazelnut Latte (250.00)\n"); 
                                    totalBill += 250; 
                                    break;
                                default: 
                                    printf("-> Invalid item selection.\n");
                            }
                            break;

                        case 2: // Cold Drinks
                            printf("\n-- Cold Drinks --\n");
                            printf("1. Iced Peach Tea ... 120.00\n2. Mocha Frappe ..... 280.00\n");
                            printf("Choose your drink: ");
                            scanf("%d", &itemChoice);
                            
                            switch (itemChoice) {
                                case 1: 
                                    printf("-> Added Iced Peach Tea (120.00)\n"); 
                                    totalBill += 120; 
                                    break;
                                case 2: 
                                    printf("-> Added Mocha Frappe (280.00)\n"); 
                                    totalBill += 280; 
                                    break;
                                default: 
                                    printf("-> Invalid item selection.\n");
                            }
                            break;

                        case 3: // Back option
                            printf("Returning to Main Menu...\n");
                            break;

                        default:
                            printf("-> Invalid beverage category.\n");
                    }
                } while (subChoice != 3);
                break; // Essential to prevent falling into the Snacks case

            case 2: // Snacks Category
                do {
                    printf("\n--- Snacks ---\n");
                    printf("1. Sweet Pastries\n2. Savory Bites\n3. Back to Main Menu\n");
                    printf("Select an option: ");
                    scanf("%d", &subChoice);

                    switch (subChoice) {
                        case 1: // Sweet Pastries
                            printf("\n-- Sweet Pastries --\n");
                            printf("1. Blueberry Muffin ......... 180.00\n2. Chocolate Croissant ...... 220.00\n");
                            printf("Choose your pastry: ");
                            scanf("%d", &itemChoice);
                            
                            switch (itemChoice) {
                                case 1: 
                                    printf("-> Added Blueberry Muffin (180.00)\n"); 
                                    totalBill += 180; 
                                    break;
                                case 2: 
                                    printf("-> Added Chocolate Croissant (220.00)\n"); 
                                    totalBill += 220; 
                                    break;
                                default: 
                                    printf("-> Invalid item selection.\n");
                            }
                            break;

                        case 2: // Savory Bites
                            printf("\n-- Savory Bites --\n");
                            printf("1. Garlic Cheese Toast ...... 160.00\n2. Paneer Tikka Wrap ........ 250.00\n");
                            printf("Choose your bite: ");
                            scanf("%d", &itemChoice);
                            
                            switch (itemChoice) {
                                case 1: 
                                    printf("-> Added Garlic Cheese Toast (160.00)\n"); 
                                    totalBill += 160; 
                                    break;
                                case 2: 
                                    printf("-> Added Paneer Tikka Wrap (250.00)\n"); 
                                    totalBill += 250; 
                                    break;
                                default: 
                                    printf("-> Invalid item selection.\n");
                            }
                            break;

                        case 3: // Back option
                            printf("Returning to Main Menu...\n");
                            break;

                        default:
                            printf("-> Invalid snack category.\n");
                    }
                } while (subChoice != 3);
                break; // Essential to prevent falling into the Exit case

            case 3: // Exit and Print Bill
                printf("\nThank you for visiting The Cozy Bean Cafe!\n");
                break;

            default:
                printf("-> Invalid main menu selection. Please try again.\n");
        }

    } while (mainChoice != 3);

    // Final Bill Output
    printf("\n========================================\n");
    printf("        FINAL BILL: Rs. %ld.00\n", totalBill);
    printf("========================================\n");

    return 0;
}