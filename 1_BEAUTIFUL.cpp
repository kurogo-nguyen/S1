#include <stdio.h>
#include <math.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    if(pow(10,n)<=k){
        printf("NO");
    } else
    {
        printf("%.0f", k*ceil(pow(10, n-1)/k));
    }
    
}