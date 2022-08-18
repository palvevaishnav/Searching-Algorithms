// /*

#include<stdio.h>
#include<stdlib.h>

//ascending sorting

void binary(int arr[],int tgt,int size){
    int star=0;
    int end=size-1;

    while(end>= star){
        int mid=star+(end-star)/2;
        if(arr[mid] > tgt){
            end= mid-1 ;
        }
        else if(arr[mid] < tgt){
            star= mid+1 ;
        }
        else{
            printf("The index is %d",mid);
            return;
        }
    }

    printf("Not found");
    return;

}

int main(){
    int size=10;
    int arr[]={1,4,15,18,29,30,49,50,69,80};
    int tgt=1;
    binary(arr,tgt,size);
    
    return 0;
}
 
