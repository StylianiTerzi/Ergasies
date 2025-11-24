#include <stdio.h>
#include <stdlib.h>

float min(float arr[], int N) {
    float mini = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] < mini) {
            mini = arr[i];
        }
    }
    return mini;

}

float max(float arr[], int N) {
    float maxi = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    return maxi;
}

void minmax(float arr[],int N){
    float mini = min(arr, N);
    float maxi = max(arr, N);
    printf("Minimum: %.2f\n", mini);
    printf("Maximum: %.2f\n", maxi);
    printf("\nMetasxhmatismos Pinakas: \n");
    printf("min= %.2f, max = %.2f\n",mini,maxi);
    for (int i = 0; i < N; i++) 
    {
        float old=arr[i];
        arr[i]=(arr[i] - mini) / (maxi - mini);
        printf("arr[%d]: Old value: %.2f, New value: %.2f\n", i,old, arr[i]);
    }
    
}

void printArr(float arr[], int N, const char* mssg){
    printf("%s\n", mssg);
    for (int i = 0; i < N; i++) {
        printf("arr[%d]: %.2f\n", i, arr[i]);
    }
    printf("\n");
}

int main(){
    int N;
    printf("Dwse megethos pinaka: ");
    scanf("%d",&N);
    float *arr =(float*)malloc(N*sizeof(float));
    if (arr==NULL)
    {
        printf("Lathos sth desmeush mnhmhs\n");
        return 1;
    }
    printf("Dwse ta stoixeia tou pinaka: \n", N);
    for (int i =0; i < N; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%f", &arr[i]);
    }
    printArr(arr, N, "Arxikos Pinakas:");
    float mini = min(arr, N);
    float maxi = max(arr, N);
    minmax(arr, N);
    printArr(arr, N, "Telikos Pinakas:");
    free(arr);
    
}