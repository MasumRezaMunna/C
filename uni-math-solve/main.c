#include <stdio.h>

int main()
{
    float cgpa;
    printf("Enter the students cgpa:\n");
    scanf("%f", &cgpa);
    if(cgpa == 4.00){
        printf("The students receive 50%% waiver \n");
    }
    else if(cgpa >= 3.75){
        printf("The students receive 35%% waiver \n");
    }
    else if (cgpa >= 3.5){
        printf("The students receive 10%% waiver \n");
    }
    else{
        printf("No waiver added. \n");
    }

    return 0;
}
