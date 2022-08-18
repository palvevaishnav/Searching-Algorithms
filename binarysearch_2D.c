/*
#include<stdio.h>
#include<stdlib.h>

int binary2d(int matrix[4][4],int target){
    int r=0;
    int c=3;
    int ans=0;

    while(r<4){

        if(matrix[r][c]==target) {
            return {r,c};
        }
        else if(matrix[r][c]<target) {
            r++;
        }
        else(matrix[r][c]>target) {
            ans=binarySearch(matrix[r][0],target,4);
        }

    }
}

int binarySearch(int array[4] ,int target,int cSize){

    int start=0;
    int end=cSize-1;

    while(start<end){
        int mid=start+(end-start)/2;
        if(array[mid] > target){
            end=mid-1;
        }
        else if(array[mid]<target){
            start=mid+1;
        }
        else{
            return mid;
        }

    }

    return -1 ;


}


int main(){
    

    int a[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    
    int target= 8;

    binary2d(a,target);

}

*/

#include <stdio.h>
#define ROWS 3
#define COLS 4
 
int binSearchOnMatrix(int matrix[][COLS], int value);
int main()
{
  int twodarr[ROWS][COLS]; //two dimensional array
  int key; //search key
  int i, j; //counter variable
  int searchStatus; //1 if key is found, 0 otherwise.
 
  //read array
  printf("Enter %d x %d matrix in ascending order: ", ROWS, COLS);
  for (i = 0; i < ROWS; i++)
    for (j = 0; j < COLS; j++)
      scanf("%d", &twodarr[i][j]);
 
  printf("\nEnter search key: ");
  scanf("%d", &key);
 
  searchStatus = binSearchOnMatrix(twodarr, key);
  printf("Key (%d) is found: %d\n", key, searchStatus);
}
 
int binSearchOnMatrix(int matrix[][COLS], int key)
{
  int start = 0;
  int mid, row, col, value;
  int end = ROWS * COLS - 1;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    row = mid / COLS;
    col = mid % COLS;
    value = matrix[row][col];
 
    if (value == key)
      return 1;
    if (value > key)
      end = mid - 1;
    else
      start = mid + 1;
  }
  return 0;
}

