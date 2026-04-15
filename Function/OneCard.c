/*
Develop a student account that has the following atributes.
ID
Name
One Card

Now take input the student account info for one student also take input the due fees. if the due fee is more than one card balance print insufficient balance and print current balance.
*/


 #include<stdio.h>
#include<string.h>
int main(){

    struct student
    {
        int id;
        char name[100];
        float OneCard;
    };
    struct student s1;

    printf("Id: ");
    scanf("%d", &s1.id);

    printf("Name: ");
    scanf("%s", &s1.name);

    printf("OneCard Balance: ");
    scanf("%f", &s1.OneCard);

  int dues;
    printf("Dues Fees: ");
    scanf("%d", &dues);

    if(s1.OneCard < dues)
    {   printf("Balance: %.2f\n", s1.OneCard);
        printf("Not enough balance in OneCard\n");
    }
    else
    {   s1.OneCard -= dues;
        printf("Payment successful\n");
    }

 return 0;
}