#include <stdio.h>
#include <stdbool.h>

int main (void)
{

    int accountNumber;
    int mortgageAmount;
    int mortgageTerm;
    float interestRate;


    while ( true )
    { //start while

        printf("%s" ,"Enter account number (-1 to end): ");
        scanf("%d", &accountNumber);

        if ( accountNumber == -1) 
        {
            return 0;
        }

        printf("%s" ,"Enter mortgage amount (in dollars): ");
        scanf("%d", &mortgageAmount);

        printf("%s" ,"Enter mortgage term (in years): ");
        scanf("%d", &mortgageTerm);

        printf("%s" ,"Enter interest rate (as a decimal): ");
        scanf("%f", &interestRate);

        float totalInterest = mortgageAmount * interestRate * mortgageTerm;

        float totalAmount = mortgageAmount + totalInterest;

        float monthlyInterest = totalAmount / (mortgageTerm * 12);

        printf("The monthly payable interest is $ %1.f\n", monthlyInterest);


    } // end while

}
