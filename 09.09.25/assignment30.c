#include <stdio.h>

int main() {
    float eng, math, phy, prog, dt;
    float total, average;

    printf("Enter marks in ENGLISH: ");
    scanf("%f", &eng);
    printf("Enter marks in MATHEMATICS: ");
    scanf("%f", &math);
    printf("Enter marks in PHYSICS: ");
    scanf("%f", &phy);
    printf("Enter marks in PROGRAMMING: ");
    scanf("%f", &prog);
    printf("Enter marks in DESIGN THINKING: ");
    scanf("%f", &dt);

    total = eng + math + phy + prog + dt;
    average = total / 5;

    if (average >= 80 && average <= 89)
        printf("Grade: A+\n");
    else if (average >= 70 && average <= 79)
        printf("Grade: A\n");
    else if (average >= 60 && average <= 69)
        printf("Grade: B+\n");
    else if (average >= 50 && average <= 59)
        printf("Grade: B\n");
    else if (average >= 40 && average <= 49)
        printf("Grade: C\n");
    else
        printf("Grade: FAIL\n");

    printf("Total Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}