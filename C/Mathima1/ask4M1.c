//Einai h askhsh 4 apo to mathhma 1 ths C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxMhnes 12
#define maxStores 5

typedef struct magzi
{
    float mhnasPwlhseis[12];
    int numMhnes;
}MAGZI;

void eisagogi(MAGZI mag[],int *n){
    printf("Dwse ton arithmo twn magazion (ews 12): ");
    scanf("%d",n);
    if(*n>maxStores){
        *n=maxStores;
        printf("Lathos arithmos magazion. O arithmos magazion orizetai ws 5.\n");
    }
    for (int i = 0; i < *n; i++)
    {
        printf("%d.Magazi:\nPosous mhnes leitourgise?(max 12)",i+1);
        scanf("%d",&mag[i].numMhnes);
        if(mag[i].numMhnes>maxMhnes){
            mag[i].numMhnes=maxMhnes;
            printf("Lathos arithmos mhnes.\n");
        }
        for (int j = 0; j < mag[i].numMhnes; j++)
        {
            do
            {
               printf("Oi pwlhseis tou mhna %d einai: ",j+1);
                scanf("%f",&mag[i].mhnasPwlhseis[j]);
                if(mag[i].mhnasPwlhseis[j]<100000 || mag[i].mhnasPwlhseis[j]>1000000){
                    printf("Lathos poso pwlhsewn. Dwse poso metaksi 100000 kai 1000000.\n");

                } 
            } while (mag[i].mhnasPwlhseis[j]<100000 || mag[i].mhnasPwlhseis[j]>1000000); 
        } 
    }
}

float mesosOrismos(MAGZI mag[],int n){
    float sum=0,mesosOros;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < mag[i].numMhnes; j++)
        {
            sum+=mag[i].mhnasPwlhseis[j];
        }
    }
    mesosOros=sum/(n*maxMhnes);
    return mesosOros;
}

void maxMag3(MAGZI mag[], int n){
    int mMg=-1;//max magazi
    float mPL=-1;//max pwlhseis
    for (int i = 0; i < n; i++)
    {
        if(mag[i].numMhnes>=3){
            if(mag[i].mhnasPwlhseis[2]>mPL){
                mPL=mag[i].mhnasPwlhseis[2];
                mMg=i;
            }
        }
    }
    if(mMg!=-1){
        printf("To magazi me tis perissoteres pwlhseis ton 3o mhna einai to magazi %d me poso pwlhsewn %.2f\n",mMg+1,mPL);

    }else{
        printf("Den yparxei magazi me 3 mhnes.\n");
    }

}

void kerdos(MAGZI mag[],int n ){
    int sunKerdos=0;
    for (int i = 0; i < n; i++){
        if (mag[i].numMhnes>=3)
        {   
            if(mag[i].mhnasPwlhseis[2]>500000){
            sunKerdos++;
            }
        }
    }
    
}

void years(MAGZI mag[], int n){
    printf("2 Xronia:\n");
    for(int i=0;i<n;i++){
        if(mag[i].numMhnes==24){
            printf("Magazi %d: 2 xronia lhtoyrgias\n ",i+1);
            printf("Gia ton prwto mhna:\n",mag[i].mhnasPwlhseis[0],1);
        
            printf("Oloi oi mhnes:\n");
            for (int j = 0; j < mag[i].numMhnes; j++)
            {
                printf("mhna pwlhseis%.2f\n",mag[i].mhnasPwlhseis[i] );
            }
            printf("mhnes kai pwlhseis supermarket:\n");
            for(int j=0; j< mag[i].numMhnes; j++){
                printf("mhnas %d : %.2f\n",j+1,mag[i].mhnasPwlhseis[i] );
            }
        }
    }
}

void check(MAGZI mag[],int n ){
    int B,fd=0;
    printf("Dwse ton arithmo twn mhnwn: ");
    scanf("%d",&B);
    for(int i=0;i<n;i++){
        if (mag[i].numMhnes>=B)
        {
            fd=1;
            printf("Magazi %d: ",i+1);
            float sum=0;
            for(int j=0; j<mag[i].numMhnes; j++){
            sum+=mag[i].mhnasPwlhseis[j];
            }
            printf("Sunolikes pwlhseis: %.2f\n",sum);
        }
    }
    if(fd==0){
        printf("Den yparxei magazi me toso mhnes leitourgias.\n");
    }

}


int main(){
    int choice;
    MAGZI mag[maxStores];
    int n=0;//arithmos magazion
    do
    {
        printf("Menu Epilogwn:\n1.Eisagogi dedomenwn\n2.Mesos oros pwlhsewn\n");
        printf("3.Magazi me megales pwlhseis ton 3o mhna\n4.Aristereia pwlhseis apo 500000 ton 3o mhna\n");
        printf("5.Magazia me 2 xronia leitourgias\n6.Elegxos magazion me sigkekrimeno arithmo mhnwn\n");
        printf("Dwse thn epilogh sou: ");
        scanf("%d",&choice); 
        switch (choice)
        {
        case 1:
            eisagogi(mag,&n);
            break;
        
        case 2:
            mesosOrismos(mag,n);
            break;
        case 3:
            maxMag3(mag,n);
            break;
        case 4:
            kerdos(mag,n);
            break;
        case 5:
            years(mag,n);
            break;
        case 6:
            check(mag,n);
            break;
        default:
            printf("Exodos programmatos.\n");
            break;
        }     
    } while (choice!=0);
    
}