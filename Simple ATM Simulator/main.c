#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program simulates basic ATM operations including withdrawing money,
    depositing money, checking balance, and exiting the session.
    The initial balance is set to 1000.
*/

int main()
{
    int operation, balance = 1000; // Operation choice and initial balance

    // Display the welcome message and available operations
    printf("Welcome to our bank, how can we assist you?\n\n");
    printf("Operations:\n");
    printf("1 - Withdraw Money\n");
    printf("2 - Deposit Money\n");
    printf("3 - Check Balance\n");
    printf("4 - Take Card\n\n");
    printf("Please enter the number corresponding to your desired operation: ");
    scanf("%d", &operation);

    if (operation == 1) // Withdraw Money
    {
        int amount, confirmation;
        printf("Enter the amount you want to withdraw: ");
        scanf("%d", &amount);
        printf("You want to withdraw: %d\n", amount);
        printf("Press 1 to confirm, 2 to cancel: ");
        scanf("%d", &confirmation);

        if (confirmation == 1)
        {
            if (amount <= balance)
            {
                balance -= amount; // Deduct the amount from the balance
                printf("Please take your cash.\nRemaining balance: %d", balance);
            }
            else
            {
                printf("Insufficient balance.");
            }
        }
        else if (confirmation == 2)
        {
            printf("Please take your card.");
        }
    }
    else if (operation == 2) // Deposit Money
    {
        int amount, confirmation;
        printf("Enter the amount you want to deposit: ");
        scanf("%d", &amount);
        printf("You want to deposit: %d\n", amount);
        printf("Press 1 to confirm, 2 to cancel: ");
        scanf("%d", &confirmation);

        if (confirmation == 1)
        {
            balance += amount; // Add the amount to the balance
            printf("Please deposit the money.\nNew balance: %d", balance);
        }
        else if (confirmation == 2)
        {
            printf("Please take your card.");
        }
    }
    else if (operation == 3) // Check Balance
    {
        printf("Your current balance is: %d", balance);
    }
    else if (operation == 4) // Take Card
    {
        printf("Please take your card.");
    }
    else // Invalid Operation
    {
        printf("Invalid operation. Please try again.");
    }

    return 0; // End of the program
}
