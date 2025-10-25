#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int income;
    char answer[6];
    float tax;
   

    printf("Give the income: ");
    scanf("%d", &income);
    
    if (income<0)
    {
        printf("Invalid income\n");
        exit(0);
    }
    
        if (income ==0)
        {
            tax=0;
        }
        
        else if(income<=10000){
            tax=income*0.09;

        }
        else if (income<=20000)
        {
            tax=((income-10000)*0.22)+10000*0.09;
        }
        else if (income<=40000)
        {
            tax = 10000 * 0.09 + 10000 * 0.22 + (income - 20000) * 0.30;
        }
        else{
            tax = 10000 * 0.09 + 10000 * 0.22 + 20000 * 0.30 + (income - 40000) * 0.50;
        }
    

    printf("your tax is %.2f\n",tax);
    
    printf("Did you pay the tax in the first month? ");
    scanf(" %5s", answer);

    if(strcasecmp(answer, "yes")==0){
        tax=tax-tax*0.1;
        printf("\nSince you paid, you have a discount on your tax which is %.2f",tax);
    }
    else if (strcasecmp(answer, "no")==0)
    {
        printf("you didnt pay so there is no discount.");
    }
    
    
    
}