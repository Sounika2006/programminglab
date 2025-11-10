#include <stdio.h>

int main() {
    int age;
    int eligibility_status;

    printf("--- Voting Eligibility Checker ---\n");
    printf("Please enter your age: ");

    
    if (scanf("%d", &age) != 1) {
        printf("Invalid input. Please enter a numerical age.\n");
        return 1;
    }

 
    if (age < 0 || age > 120) {

        eligibility_status = -1; 
    }

    else if (age >= 18) {
        eligibility_status = 1;
    } else {
        eligibility_status = 0;
    }

    printf("\nChecking eligibility...\n");
    
    switch (eligibility_status) {
        case 1:

            printf("Status: ELIGIBLE\n");
            printf("Congratulations! You are %d years old and eligible to cast your vote.\n", age);
            break;

        case 0:
 
            printf("Status: NOT ELIGIBLE\n");
            printf("You are %d years old. You will be eligible to vote in %d years.\n", age, 18 - age);
            break;

        default:

            printf("Status: ERROR\n");
            printf("The age entered (%d) is invalid for this check.\n", age);
            break;
    }

    return 0;
}
