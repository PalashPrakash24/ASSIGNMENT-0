#include <stdio.h>
void main(){
    char ans;
    int bill , discount = 0 , finalamount;

    printf("Are you a student: ");
    scanf("%c" , &ans);

    printf("Enter your total bill : ");
    scanf("%d" , &bill);


    if( ans == 'y' || ans == 'Y'){
        if (bill > 500){
            discount = 0.20 * bill;
        }
        else{
            discount = 0.10 * bill;
        }
    } else{
        if( ans != 'y' || ans != 'Y'){
            if( bill > 600){
            discount = 0.15 * bill;
            }
            else{
                printf("Sorry you are not eligble for the discount\n");
            }
    }
}
finalamount = bill - discount;
printf("Your final amount is : %d",finalamount);

}