// C Program to Calculate Gross Salary
#include <stdio.h>
int main(){
    float basic, da_percent, hra_percent, da, hra, gross_salary;
    
    // Asking for input
    printf("Enter the basic pay: ");
    scanf("%f", &basic);
    printf("Enter the DA percentage: ");
    scanf("%f", &da_percent);
    printf("Enter the HRA percentage: ");
    scanf("%f", &hra_percent);
    
    // Calculating D.A and H.R.A
    da = (basic * da_percent) / 100;
    hra = (basic * hra_percent) / 100;
    
    // Calculating gross salary
    gross_salary = basic + da + hra;
    
    // Displaying output
    printf("Gross salary of the employee is: %.2f", gross_salary);
    return 0;
}
