#include <stdio.h>
#include <math.h>

int cdif(int n){
    int x = n/2;
    int a=0;
    for(int i=0; i<x; i++){
        a=a*10+9;
    }
    int dif = a*(pow(10, (n+1)/2)-1)-pow(10,(n-1)/2)*(pow(10,n/2)-1);
    return dif;
}

int main()
{   
    int n;
    scanf("%d", &n);
    printf("%d", cdif(n));
    return 0;
}