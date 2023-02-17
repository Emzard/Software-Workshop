#include <stdio.h>

int main (void)
{


    int accountNumber;
    int mortgageAmount;
    int mortgageTerm;
    float interestRate;

    while ( accountNumber != -1 )
    { //start while
        printf("Enter account number (-1 to end): ");
        scanf("%d\n", &accountNumber);

        printf("Enter mortgage amount (in dollars): ");
        scanf("%d\n", &mortgageAmount);

        printf("Enter mortgage term (in years): ");
        scanf("%d\n", &mortgageTerm);

        printf("Enter interest rate (as a decimal): ");
        scanf("%f\n", &interestRate);

        float totalInterest = mortgageAmount * interestRate * mortgageTerm;

        float totalAmount = mortgageAmount + totalInterest;

        printf("The monthly payable interest is $ %d\n", totalAmount / (mortgageTerm * 12));
    } // end while

}