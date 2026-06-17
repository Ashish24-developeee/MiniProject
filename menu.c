#include<stdio.h>
int main()
{
    char op;

    printf("<----------Welcome to my Dhaba---------->");
    printf("Select what you want-> \n");
    printf("1. Starter\n2. Main Course\n3. Dessert\n4. Exit\n");
    scanf("%c",&op);
    switch(op)
    {
        //hii
        //how
        case'1':
        printf("You have choosed starter\n");
        printf("1. Chicken 65\n2. Dragon Chicken\n3. Paneer Pakoda\n");
        break;
        case'2':
        printf("You have choosed main course\n");
        printf("1. \n2.\n3. \n");
        break;
        case'3':
        printf("You have choosed dessert\n");
        printf("1. \n2. \n3. \n");
        break;
        case'4':
        printf("Thank you visit again\n");
        break;
        default:
        printf("Sorry try next time\n");
        break;
    }
}