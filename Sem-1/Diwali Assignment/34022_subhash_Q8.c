#include<stdio.h>
int main ()
{
    printf("Subhash Gottumukkala (34022)\n");
    int user_id;
    float unit,amount,total_amount,surcharge;
    char name;
    printf("Enter the user id of user: ");
    scanf("%d", &user_id);
    printf("\nEnter the name of user: ");
    scanf("%s", &name);
    printf("\nEnter the number of units consumed by user: ");
    scanf("%f", &unit);

    if(unit<=100){
    amount=unit*1;
    printf("\nCharge Details");
    printf("\n%d %s %.2f", user_id,&name,amount);
    }
    else if((unit>100)&&(unit<=300)){
    amount=unit*2;
    printf("\nCharge Details");
    printf("\n%d %s %.2f", user_id,&name,amount);
    }
    else if(unit>300){
    amount=unit*3;
    if(amount>1000){
    surcharge=amount*0.15;
    total_amount=amount+surcharge;
    printf("\nCharge Details");
    printf("\n%d %s %.2f", user_id,&name,total_amount);
    }
    else{
    printf("\nCharge Details");
    printf("\n%d %s %.2f", user_id,&name,amount);
    }
    }

    return 0;
}