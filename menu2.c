#include<stdio.h>
#include<string.h>
int main()
{
    char items[50][50];
    int price[50];
    int count = 0;
    int mainChoice,subChoice,itemChoice;
    long totalBill=0;
    printf("\n------Welcome to ASH's Cafe------\n");
    do{
        printf("\n---Main Menu---\n");
        printf("1. Beverages\n2. Snacks\n3. View Bill and Exit\n");
        printf("Please select your choice: ");
        scanf("%d",&mainChoice);
        switch (mainChoice)
        {
            case 1:
            do{
            printf("\n----Beverages----\n");
            printf("1. Hot Coffee\n2. Cold Drinks\n3. Back to Main Menu\n");
            printf("Please select your choice: ");
            scanf("%d",&subChoice);
            switch (subChoice)
            {
            case 1:
                printf("\n---Hot Coffee---\n");
                printf("1. Espresso .... 150.00\n2. Cappuccino .... 200.00\n3. Hazlenut Latte .... 250.00\n");
                printf("Please select your choice: ");
                scanf("%d",&itemChoice);
                switch (itemChoice)
                {
                case 1:
                    printf("--> Added Espresso .... 150.00");
                    strcpy(items[count],"Espresso");
                    price[count]=150;
                    count++;
                    totalBill+=150;
                    break;
                case 2:
                    printf("--> Added Cappuccino .... 200.00");
                    strcpy(items[count],"Cappuccino");
                    price[count]=200;
                    count++;
                    totalBill+=200;
                    break;
                case 3:
                    printf("--> Added Hazlezut Latte .... 250.00");
                    strcpy(items[count],"Hazlezut Latte");
                    price[count]=250;
                    count++;
                    totalBill+=250;
                    break;
                default:
                    printf("Invalid choice for Hot Coffee category");
                    break;
                }
                break;
            case 2:
                printf("\n---Cold Drinks---\n");
                printf("1. Boba Iced Tea .... 150.00\n2. Caramel Frappe .... 250.00\n");
                printf("Please select your choice: ");
                scanf("%d",&itemChoice);
                switch (itemChoice)
                {
                case 1:
                    printf("--> Added Boba Iced Tea .... 150.00");
                    strcpy(items[count],"Boba Iced Tea");
                    price[count]=150;
                    count++;
                    totalBill+=150;
                    break;
                case 2:
                    printf("--> Added Caramel Frappe .... 250.00");
                    strcpy(items[count],"Caramel Frappe");
                    price[count]=250;
                    count++;
                    totalBill+=250;
                    break;
                default:
                    printf("Invalid choice for Cold Drink category");
                    break;
                }
                break;
            case 3:
                printf("\nReturning to Main Menu\n");
                break;
            
            default:
                printf("Invalid choice in Beverage category");
                break;
            }
            break;
        }while (subChoice!=3);
        break;
        case 2:
        do{
            printf("\n----Snacks----\n");
            printf("1. Sweet Pasteries\n2. Savory Bites\n3. Back to Main Menu\n");
            printf("Please select your choice: ");
            scanf("%d",&subChoice);
            switch (subChoice)
            {
            case 1:
                printf("\n---Sweet Pasteries---\n");
                printf("1. Blueberry Muffin .... 180.00\n2. Chocolate Crossant .... 230.00\n");
                printf("Please select your choice: ");
                scanf("%d",&itemChoice);
                switch (itemChoice)
                {
                case 1:
                    printf("--> Added Blueberry Muffin .... 180.00");
                    strcpy(items[count],"Blueberry Muffin");
                    price[count]=180;
                    count++;
                    totalBill+=180;
                    break;
                case 2:
                    printf("--> Added Chocolate Crossant .... 230.00");
                    strcpy(items[count],"Chocolate Croissant");
                    price[count]=230;
                    count++;
                    totalBill+=230;
                    break;
                
                default:
                    printf("Invalid choice for Sweet Pasteries category");
                    break;
                }
                break;
            case 2:
                printf("\n---Savory Bites---\n");
                printf("1. Garlic Cheese Toast .... 130.00\n2. Paneer Tikka Wrap .... 250.00\n");
                printf("Please select your choice: ");
                scanf("%d",&itemChoice);
                switch (itemChoice)
                {
                case 1:
                    printf("--> Added Garlic Cheese Toast .... 130.00");
                    strcpy(items[count],"Garlic Cheese Toast");
                    price[count]=130;
                    count++;
                    totalBill+=130;
                    break;
                case 2:
                    printf("--> Added Paneer Tikka Wrap .... 250.00");
                    strcpy(items[count],"Paneer Tikka Wrap");
                    price[count]=250;
                    count++;
                    totalBill+=250;
                    break;
                default:
                    printf("Invalid choice for Savory Bites category");
                    break;
                }
                break;
            case 3:
                printf("\nReturning to Main Menu\n");
                break;
            
            default:
                printf("Invalid choice in Beverage category");
                break;
            }
        }while (subChoice!=3);
        break;
        case 3:
        printf("Thank You for visiting my ASH's Cafe\n");
        break;
        default:
        printf("Invalid main menu selection\n");
        }
    }while (mainChoice!=3);
    int i;

printf("\n\n=============================================");
printf("\n            ASH's CAFE");
printf("\n=============================================");
printf("\n%-5s %-30s %10s","No.","Item","Price");
printf("\n---------------------------------------------");

for(i=0;i<count;i++)
{
    printf("\n%-5d %-30s Rs.%d",i+1,items[i],price[i]);
}

printf("\n--------------------------------------------");
printf("\nTotal Bill : Rs.%ld.00",totalBill);
printf("\n============================================");
printf("\nThank You! Visit Again.\n");
    return 0;
}