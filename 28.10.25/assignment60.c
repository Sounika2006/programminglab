#include <stdio.h>
#include <limits.h>

int main() {
 
    long num1, num2, num3; 
    
    printf("--- Three-Number Analyzer ---\n");
    printf("Enter the first number: ");
    scanf("%ld", &num1);
    
    printf("Enter the second number: ");
    scanf("%ld", &num2);
    
    printf("Enter the third number: ");
    scanf("%ld", &num3);
    
    printf("\n");

    if (num1 == num2 && num2 == num3) {
        printf("The entered numbers are **equal**.\n");
    } else {
    
        long greatest_num = num1;
        
        if (num2 > greatest_num) {
            greatest_num = num2;
        }
        
        if (num3 > greatest_num) {
            greatest_num = num3;
        }
        
        printf("The greatest number is **%ld**\n", greatest_num);
    }
    
    const char *sign_category;

    if (num1 > 0 && num2 > 0 && num3 > 0) {
        sign_category = "All positive";
    } 
    else if (num1 < 0 && num2 < 0 && num3 < 0) {
        sign_category = "All negative";
    } 

    else {
        sign_category = "Mixed numbers";
    }
    
    printf("Entered numbers are **%s**.\n", sign_category);
    
    printf("-----------------------------------------\n");

    return 0;
}
