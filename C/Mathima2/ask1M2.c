//Akshsh 1 apo to mathhma 2 ths C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

float add(float a, float b, char op){

    if (op == '+')
    {
        return a + b;
    }
    else if (op=='-')
    {
        return a - b;
    }
    else if (op=='*')
    {
        return a * b;
    }
    else if (op=='/')
    {
        if (b==0)
        {
            printf("Lathos: diairesh me mhden\n");
            exit(1);
        }
        return a / b;
    }
    else
    {
        printf("Lathos leitourgia\n");
        exit(1);
    }
    
    
    
}

int main(){
    float num1, num2, result;
    char answer=' ';
    while ((tolower(answer))!='e')
    {
    printf("Dwse 2 arithmous: ");
    scanf("%f %f", &num1, &num2);
    printf("Dwse th leitourgia pou thes na kaneis: (+, -, *, /) diaforetika gia eksodo 'e': ");
    scanf(" %c", &answer);
    if (tolower(answer)=='e'){
        break;
    }
    result = add(num1, num2, answer);
    printf("To apotelesma einai: %.2f\n", result);
    }
    printf("Ektelestike me epityxia\n");
    return 0;
}