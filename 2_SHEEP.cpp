#include <stdio.h>
#include <math.h>

int reformat(int x, int arr[], int l){
    for (int i = 0; i < l; i++)
    {
        if(x>=arr[i])
            x+=1;
    }
    return x;
}

int caculate(int n, int l, int arr[]){
    int newVal=0;
    int x=0;
    int y=10-l;
    while (n!=0)
    {
        newVal+=(reformat(n%y, arr, l)*pow(10,x++));
        n/=y;
    }
    return newVal;
}

int main(){
    int n, l;
    scanf("%d %d", &n, &l);
    int arr[l];
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", caculate(n, l, arr));
    
    // int x = log10(n);
    
    return 0;
}