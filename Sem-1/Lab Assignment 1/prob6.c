// C Program to Calculate Gross Salary
#include <stdio.h>
int main(){
    float basic, da, hra, gross_salary;

    // Asking for input
    printf("Enter the basic pay: ");
    scanf("%f", &basic);

    // Calculating D.A and H.R.A
    da = (basic * 10) / 100;
    hra = (basic * 12) / 100;

    // Calculating gross salary
    gross_salary = basic + da + hra;

    // Displaying output
    printf("Gross salary of the employee is: %.2f", gross_salary);
    return 0;
}