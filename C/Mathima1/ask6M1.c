#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Einai h askhsh 6 apo to mathhma 1 ths C
typedef struct Employee{
    char name[50];
    double salary;
}EMP;

struct COMPANY 
{
    char name[50];
    int ypallhloi;
    double sumEjoda, sumEsoda;
    EMP* employees;
};


void inputEmp(EMP* employees, int n){
    for(int i=0; i<n; i++){
        printf("Dwse to onoma tou ypallhlou %d: ", i+1);
        scanf("%s", employees[i].name);
        printf("Dwse to mistho tou ypallhlou %d: ", i+1);
        scanf("%lf", &employees[i].salary);
        printf("Ypallhlos: %s Misthos: %.2lf\n", employees[i].name, employees[i].salary);
    }
}

double sunolo(EMP* employees, int n){
    double total = 0.0;
    for(int i=0; i<n; i++){
        total += employees[i].salary;
    }
    return total;
}

struct COMPANY Enwsh(struct COMPANY c1, struct COMPANY c2)
{
    struct COMPANY m;       //to m einai shmainei merged company
    strcpy(m.name, c1.name);
    strcat(m.name, "-");        //enwnw to onoma twn 2 etairiwn 
    strcat(m.name, c2.name);
    m.ypallhloi = c1.ypallhloi + c2.ypallhloi;
    m.employees = malloc(m.ypallhloi * sizeof(EMP));
    if (m.employees==NULL)
    {
        printf("Lathos sth desmeush mnhmhs\n");
        exit(1);
    }

    for (int i = 0; i < c1.ypallhloi; i++)
    {
        m.employees[i] = c1.employees[i];
    }
    for (int i = 0; i < c2.ypallhloi; i++)
    {
        m.employees[c1.ypallhloi + i] = c2.employees[i];
    }
    m.sumEsoda = c1.sumEsoda + c2.sumEsoda;
    m.sumEjoda = sunolo(m.employees, m.ypallhloi);
    return m;
    
}

void emfanisi2(struct COMPANY m)
{
    printf("Company: %s\n", m.name);
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
    int n, m;
    struct COMPANY c1, c2;
    printf("The name of the companies: \n");
    scanf("%s", c1.name);
    printf("The number of employees of the companies: \n");
    scanf("%d", &c1.ypallhloi);
    c1.employees = (EMP*) malloc(c1.ypallhloi * sizeof(EMP));
    if (c1.employees == NULL)      //den theloyme na epistrepsei NULL h malloc
    {
        printf("Lathos sth desmeush mnhmhs\n");
        return 1;
    }
    inputEmp(c1.employees, c1.ypallhloi);
    printf("Dwse ta esoda kai ta ejoda tis etairias 1: \n");
    scanf("%lf", &c1.sumEsoda);
    c1.sumEjoda = sunolo(c1.employees, c1.ypallhloi);
    //Gia thn etairia 2
    printf("The name of the second company: \n");
    scanf("%s", c2.name);
    printf("The number of employees of the second company: \n");
    scanf("%d", &c2.ypallhloi);
    c2.employees = (EMP*) malloc(c2.ypallhloi * sizeof(EMP));
    if (c2.employees == NULL)     
    {
        printf("Lathos sth desmeush mnhmhs\n");
        return 1;
    }
    inputEmp(c2.employees, c2.ypallhloi);
    printf("Dwse ta esoda kai ta ejoda tis etairias 2: \n");
    scanf("%lf", &c2.sumEsoda);
    c2.sumEjoda = sunolo(c2.employees, c2.ypallhloi);

    emfanisi2(c1);
    emfanisi2(c2);
    struct COMPANY me = Enwsh(c1, c2);
    emfanisi2(me);
    free(c1.employees);
    free(c2.employees);
    free(me.employees);
    return 0;
    /*printf("Dwse to megethos tou pinaka: ");
    scanf("%d", &n);
    EMP* employees = (EMP*) malloc(n * sizeof(EMP));
    if (employees == NULL)      //den theloyme na epistrepsei NULL h malloc
    {
        printf("Lathos sth desmeush mnhmhs\n");
        return 1;
    }
    
    inputEmp(employees, n);
    double total = sunolo(employees, n);
    printf("Synolikos misthos olwn twn ypallhlwn: %.2lf\n", total);
    free(employees);*/

}