#include<stdio.h>

void processPayment(float balance, float bill){
    if (bill < 200)
    {
        printf("Minimum order amount is 200 TK. \n");
    }else if (bill > balance)
    {
        printf("Insufficient Balance. \n");
    }else{
        balance -= bill;
        printf("payment successful. \n");
    }
    printf("Remaining wallet Balance = %.0f\n", balance);
    
}

int main(){
    float balance, bill;
    printf("Enter wallet balance: ");
    scanf("%f", &balance);
    printf("Enter bill amount: ");
    scanf("%f", &bill);
    processPayment(balance, bill);
    return 0;
}