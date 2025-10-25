#include <stdio.h>

int main()
{
    float a, b, result;
    char op;

    int m=0, count=0;

    while (m==0)
    {
    printf("Enter a, b, and operation (+ or - or * or / :)\n");
    scanf("%f %f %c", &a, &b, &op);

    if (op == '/' && b == 0.0)
    {
       printf("Error: Division by zero.\nOperation has failed.\n");
       return -1;
    }

    if (op == '+')
    {
        result = a +b;
    }
    else if (op == '-')
    {
        result = a - b;
    }
    else if (op == '*')
    {
        result = a * b;
    }
    else
    {
        if (op != '/')
        {
            printf("Error: undefines oparetion: %c", op);
            return -1;
        }
        
        result = a / b;
    }

    if (op == '$')
    {
        m=1;
    }
    printf("Success! Result of %.2f %c %.2f = %.2f\n", a, op, b, result);
    count++;
    printf("You have done %d operations\n", count);
    
    }
    return 0;
}