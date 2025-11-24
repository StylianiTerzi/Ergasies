#include <stdlib.h>
#include <stdio.h>

int int_sum(int arr[], int N){
  int sum=0;
  for(int i=0;i<N;i++){
    sum+=arr[i];

  }
    return sum;
}

int anadromh(int arr[],int N, int vad){
    if(N==0){
        printf("An h periptosh mas einai me N=0, tote h synarthsh epistrefei to 0\n");
        return 0;
    }
    printf("Anadromh gia N=%d kai vad=%d\n",N,vad);
    int part=anadromh(arr,N-1,vad+1);
    int result2=arr[N-1]+part;
    printf("Epistrefw apo N=%d me vad=%d to apotelesma: %d\n",N,vad,result2); //van einai bhma
    return result2;
}

int main(){
    int N;
    printf("Dwse megethos pinaka: ");
    scanf("%d",&N);
    if (N<=0){
        printf("Lathos megethos pinaka. Prepei na einai thetiko\n");
        return 1;
    }
    int* arr=(int*)malloc(N*sizeof(int));
    printf("Dwse ta stoixeia tou pinaka: \n");
    for(int i=0;i<N;i++){
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Ta stoixeia tou pinaka einai: \n");
    for(int i=0;i<N;i++){
        printf("arr[%d]: %d\n",i,arr[i]);
    }
    int sum=anadromh(arr,N,1);
    printf("To athroisma twn stoixeiwn tou pinaka me anadromh einai: %d\n",sum);
    
    free(arr);
    return 0;
}