#include<stdio.h>

int maxLen=0;

void getMax(int arr[], int cur, int prev, int n, int length[]){
    for (int i = cur+1; i < n; i++)
    {
        if(arr[i]!=arr[i-1]){
            if(length[i]==0)
                getMax(arr, i, cur, n, length);
            if(arr[i]!=arr[cur] && arr[i]!=arr[prev]){
                length[prev]=i-prev;
                if(maxLen<length[prev])
                    maxLen = length[prev];
                return;
            }
        }
    }
    length[prev]=n-prev;
    if(maxLen<length[prev])
        maxLen = length[prev];
    return; 
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int length[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        length[i]=0;
    }
    getMax(arr, 0, 0, n, length);
    for (int i = 0; i < n; i++)
    {
        
        if(length[i]==maxLen){
            printf("%d %d" , i+1, maxLen);
            break;
        }
    }
    
    
    return 0;
}
