#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maxDif=0;
int difs[3][3];

void dif(int a[], int start, int end){
    if(start==end){
        difs[start][end]=a[end];
        if(maxDif<abs(a[end])){
            maxDif = abs(a[end]);
        }
        return;
    }
    for(int i=start; i < end; i++){
        if(difs[i][end] == NULL){
            dif(a, i+1, end);
            difs[i][end]=difs[i+1][end]+a[i];
            if(maxDif<abs(difs[i][end]))
                maxDif = abs(difs[i][end]);
        }
        if(difs[start,i+1==NULL]){
            dif(a, start, i);
            difs[start][i+1]=difs[start][i]+a[i+1];
            if(maxDif<abs(difs[start][i+1]))
                maxDif = abs(difs[start][i+1]);
        }
    }
    return;
}

int main()
{
    int n;
    scanf("%d ", &n);
    char arr[n];
    int count=0, 
        j=0,
        a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &arr[i]);   //nhap chuoi

        // chuyen chuoi nhap thanh day so cac ki tu giong nhau lien tuc
        if(arr[i]==arr[0]){
            if(i!=0 && (arr[i]!=arr[i-1])){
                a[j++]=count;
                count = 0;
            }
            count++;
        }
            
        else if(arr[i]!=arr[i-1]){
            a[j++]=count;
            count = -1;
        } else
            count--;
    }
    a[j]=count;
   
    dif(a, 0, j);
    printf("%d", maxDif);
    return 0;
}
