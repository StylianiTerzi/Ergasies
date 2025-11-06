#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Einai h askhsh 5 apo to mathhma 1 ths C
struct COMPANY
{
    char name[50];
    int ypallhloi;
    double sumEjoda, sumEsoda;
};
struct COMPANY Enwsh(struct COMPANY c1, struct COMPANY c2)
{
    struct COMPANY m;       //to m einai shmainei merged company
    strcpy(m.name, c1.name);
    strcat(m.name, "-");        //enwnw to onoma twn 2 etairiwn 
    strcat(m.name, c2.name);
    m.ypallhloi = c1.ypallhloi + c2.ypallhloi;
    m.sumEjoda = c1.sumEjoda + c2.sumEjoda;
    m.sumEsoda = c1.sumEsoda + c2.sumEsoda;
    return m;
}

void emfanisi(struct COMPANY a, struct COMPANY b, double diaf, double diaf2)
{
    printf("Company 1: %s\n", a.name);
    printf("Number of employees: %d\n", a.ypallhloi);
    printf("Income: %.2lf\n", a.sumEsoda);
    printf("expenses: %.2lf\n", a.sumEjoda);

    printf("Company 2: %s\n", b.name);
    printf("Number of employees: %d\n", b.ypallhloi);
    printf("Income: %.2lf\n", b.sumEsoda);
    printf("expenses: %.2lf\n", b.sumEjoda);

    printf("Difference in incomes: %.2lf\n", diaf);
    printf("Difference in expenses: %.2lf\n", diaf2);

}


void emfanisi2(struct COMPANY m)
{
    printf("Merged Company: %s\n", m.name);
    printf("Number of employees: %d\n", m.ypallhloi);
    printf("Income: %.2lf\n", m.sumEsoda);
    printf("expenses: %.2lf\n", m.sumEjoda);
    if (m.sumEsoda>m.sumEjoda)
    {
        printf("The company has profit.\n");
    }
    else if (m.sumEsoda<m.sumEjoda)
    {
        printf("The company has loss.\n");
    }
    else
    {
        printf("The company is fine.\n");
    }
    
}


int main(){
    struct COMPANY c1, c2;
    printf("The name of the companies: \n");
    scanf("%s %s", c1.name, c2.name);
    printf("The number of employees of the companies: \n");
    scanf("%d %d", &c1.ypallhloi, &c2.ypallhloi);
    printf("Give the expenses and incomes of the first company: \n");
    scanf("%lf %lf", &c1.sumEjoda, &c1.sumEsoda);
    printf("Give the expenses and incomes of the second company: \n");
    scanf("%lf %lf", &c2.sumEjoda, &c2.sumEsoda);

    double result1 = c1.sumEsoda - c2.sumEsoda;
    double result2 = c1.sumEjoda - c2.sumEjoda;
    emfanisi(c1, c2, result1, result2);
    
    struct COMPANY m = Enwsh(c1, c2);
    emfanisi2(m);
    return 0;


}