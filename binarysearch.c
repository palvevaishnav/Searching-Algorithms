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
 
// */
/*


// BINARY SEARCH METDOD USING JAVASCRIPT.

function binary(a,t){
    let c = a.length;
    let start=0;
    let end=c-1;
    

    while(end >= start){
        let mid=start +(end-start)/2;
        mid=Number.parseInt(mid);
        if(t>a[mid]){
            start=mid+1;
        }
        else if(t<a[mid]){
            end=mid-1;
        }
        else{
            console.log("the index of "+ t + " is "+ mid);
            return;
        }
    }
    console.log("The element not found");
    return;
}



let a=[2,6,9,16,18,22,23,27,35,46,57,76,90];
let b=90;
binary(a,b);
// console.log(a[12])

// */