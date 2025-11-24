#include <stdio.h>

int main(){
    int N;
    printf("TXT askhsh");
    FILE* fp;
    fp=fopen("output.txt","w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Posous paiktes thelete na dwsete? ");
    scanf("%d",&N);
    fprintf(fp, "O arithmos twn paiktnwn einai: %d\n",N);
    for ( int i = 0; i < N; i++)
    {
        int goals;
        printf("Dwse ta goals tou paikth %d: ",i+1);
        scanf("%d",&goals);
        fprintf(fp, "O paikths %d exei kanei %d goals\n",i+1,goals);
    }
    fclose(fp);
    printf("dhmiourgithike to arxeio output.txt\n");

    fscanf(fp, "O arithmos twn paiktnwn einai: %d\n",&N);
    int total=0;
    int goals;
    for ( int i = 0; i < N; i++)
    {
        fscanf(fp, "O paikths %d exei kanei %d goals\n",&i,&goals);
        total+=goals;
    }
    fclose(fp);
    float average=(float)total/N;
    printf("O mesos oros twn goals einai: %.2f\n",average);
    printf("To synolo twn goals einai: %d\n",total);
    return 0;

    
}