#include<stdio.h>
void printarray(int arr[], int n){
        printf("The entered no.s are :\n");
        for(int i=0;i<n;++i){
            printf(" %d ",arr[i]);
        }
        printf("\n");
 }
 void bubbleSort(int arr[], int n){
   int isSorted=0;
     for(int i=0; i<n-1;i++){
        printf("Working on pass number %d\n",i+1);
        isSorted=1;
        for(int j=0; j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSorted=0;
            }
            else{
                if(arr[j]==arr[j+1]){
                    printf("Duplicate no.s found: %d\n",arr[j]);
                }
            };
        }
        if(isSorted){
            return;
        }
     }
     }
int main(){
    int n;
    printf("Enter the no. of integers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ",n);
    for(int i=0; i<n ;++i){
        scanf("%d", &arr[i]);
    }
    printarray(arr, n);
    bubbleSort(arr, n);
    printarray(arr, n);
    return 0;
} 