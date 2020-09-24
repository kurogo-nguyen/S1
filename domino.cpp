#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int minDif=__INT_MAX__;

void cDif(int dominos[][2], int pos, int dif, int n){
    if(pos==n){
        if(abs(dif)<minDif){
            minDif = abs(dif);
        }
        return;
    }
    int val = dominos[pos][0] - dominos[pos][1];

    cDif(dominos, pos+1, dif+val, n);
    cDif(dominos, pos+1, dif-val, n);
    
    return;
}

int main(){
    int n;
    scanf("%d", &n);
    
    int dominos[n][2]; //khoi tao domino
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &dominos[i][j]);
        }    
    }
    cDif(dominos, 0, 0, n);
    printf("%d", minDif);
    return 0;
}