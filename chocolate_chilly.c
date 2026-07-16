#include<stdio.h>
int main()
{
    int chilly=1,chocolates=13;
    int n1,n2;
    char p1[15];
    char p2[15];

    printf("\n---------------------\n");
    printf("\nChilly Chocolate Game\n");
    printf("\n---------------------\n");

    printf("User notice: This game can only be played by two teams\n");


    printf("Enter Player 1's name: \n");
    scanf("%s",p1);

    printf("Enter Player 2's name: \n");
    scanf("%s",p2);

    printf("\nLet's begin the Game\n");
    printf("CHOCOLATES=%d\n", chocolates);
    printf("CHILLY=%d\n", chilly);
    do
    {
        printf("%s's turn\n",p1);

    label:
        printf("Select the chocolates between 1 to 3: ");
        scanf("%d",&n1);
            if(n1>0 && n1<=3 && n1 <= chocolates)
            {
                chocolates=chocolates-n1;
                printf("The remaining chocolates are %d\n",chocolates);
            }
            else
            {
                printf("Invalid Input (Enter the number between 1 to 3\n)");
                goto label;
            }

        if (chocolates <= 0)
        {
            printf("%s is the winner \n",p1);
            printf("%s gets the Chilly \n",p2);
            break;
        }

        printf("%s's turn\n",p2);
    label1:
        printf("Select the chocolates between 1 to 3: ");
        scanf("%d",&n2);
            if(n2 > 0 && n2 <= 3 && n2<=chocolates)
            {
                chocolates=chocolates-n2;
                printf("The remaining chocolates are %d\n",chocolates);
            }
            else
            {
                printf("Invalid Input (Enter the number between 1 to 3\n)");
                goto label1;
            }
        

        if(chocolates <= 0)
        {
            printf("%s is the winner \n",p2);
            printf("%s gets the Chilly \n",p1);
            break;
        }
        
    } while (chocolates>0);
    
    return 0;
}