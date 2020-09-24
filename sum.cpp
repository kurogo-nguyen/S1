#include <stdio.h>
#include <stdlib.h>

bool isColumnUsed[8];
int maxSum = 0;
bool isDiagonalUsed[16];

int getSum(int row, int arr[][8], int sum){
    if(row == 8){
        if(maxSum<sum)
            maxSum=sum;
        return 0;
    }

    for(int i=0; i<8;i++){
        if(!isColumnUsed[i] && !isDiagonalUsed[abs(row-i)]){
            isColumnUsed[i]=true;
            isDiagonalUsed[abs(row-i)]= true;
            getSum(row+1, arr, sum+arr[row][i]);
            isColumnUsed[i]=false;
            isDiagonalUsed[abs(row-i)]= false;
        }
    }

    return 0;
}

int main(){
    // set các cột va đường chéo chưa sử dụng
    for(int i=0; i<8; i++){
        isColumnUsed[i]=false;
        isDiagonalUsed[i]= false;
    }
        
    int arr[8][8];
    // nhap bang gia tri
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    getSum(0, arr, 0);
    printf("%d", maxSum);
    return 0;
}