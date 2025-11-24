#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_init(int N,int low, int high){
    printf("\nDhmioyrgia %d tuxaion arithmon se pinakap[%d..%d]:\n",N,low,high);
    int* arr=(int*)malloc(N*sizeof(int));
    for(int i=0;i<N;i++){
        arr[i]=rand()%(high-low+1)+low;
        printf("arr[%d]: %d\n",i,arr[i]);

    }
    printf("\n");
    free(arr);
}

void int_product(int u[],int N){
    int product=1;
    for(int i=0;i<N;i++){
        product*=u[i];
        
        
    }
    printf("To ginomeno twn stoixeiwn tou pinaka einai: %d\n",product);
}

int main(){
    srand(time(NULL));
    int N,low,high;
    printf("rand_init function:\n");
    rand_init(10,1,100);
    rand_init(5,50,150);
    rand_init(8,200,300);
    printf("Dwse megethos pinaka: ");
    scanf("%d",&N);
    int* arr1 =(int*)malloc(N*sizeof(int));
    int* arr2 =(int*)malloc(N*sizeof(int));
    printf("Dwse %d stoixeia tou prwtou pinaka kai meta gia ton deytero pinaka: \n", N);
    for ( int i=0; i<N; i++)
    {
       printf("arr1[%d]: ",i);
       scanf("%d",&arr1[i]);
       printf("arr2[%d]: ",i);
       scanf("%d",&arr2[i]);
    }
    printf("\nPrwtos pinakas kai Deyteros pinakas \n");
    for(int i=0;i<N;i++){
        printf("arr1[%d]: %d\n",i,arr1[i]);
        printf("arr2[%d]: %d\n",i,arr2[i]);
    }
    int_product(arr1,N);
    int_product(arr2,N);
    int product1=1,product2=1;
    for(int i=0;i<N;i++){
        product1*=arr1[i];
        product2*=arr2[i];
    }

    if(product1==product2){
        printf("Ta ginomena twn duo pinakwn einai isa: %d\n",product1);
    }else if (product1>product2){
        printf("o pinakas 1 exei megalutero ginomeno: %d \n",product1);
    }else if(product1<product2){
        printf("o pinakas 2 exei megalutero ginomeno: %d \n",product2);
    }
    free(arr1);
    free(arr2);

}