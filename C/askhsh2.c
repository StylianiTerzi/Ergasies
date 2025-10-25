#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    float N,L,sum=0.0,x;
     
    do
    {
    printf("Enter a number N: \n");
    scanf("%f", &N);
    } while (N>0.0 || N>10.0);
    if (N == 0.0)
    {
        printf("The number you gave, cannot be divided with 0\n");
        exit(0);
    }

    printf("Enter a number x: \n");
    scanf("%f", &x);

    printf("Enter a number L: \n");
    scanf("%f", &L);

    for (int i = 0; i <= (int)N; i++)
    {
        sum= sum+ powf(x,i) + i/N;
    }
    sum = sum *L;
    printf("The result is: %.2f\n", sum);
    return 0;
}