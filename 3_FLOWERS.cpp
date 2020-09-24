#include <stdio.h>

int main(){
    int n, q;
    scanf("%d", &n);
    int height[n];
    int maxHeight=0;
    int need = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &height[i]);
        if(height[i]>maxHeight){
            maxHeight = height[i];
        }
    }
    scanf("%d", &q);
    for (int i = 0; i < n; i++)
    {
        need+=maxHeight-height[i];
    }
    printf("%d", need*q);
    return 0;
}