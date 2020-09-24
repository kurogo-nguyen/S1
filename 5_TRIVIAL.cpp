#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    float max[]={0,0}, 
        min[]={0,__INT_MAX__*1.0};
    float nor=1;
    for (int i = a; i <= b; i++)
    {
        nor=1;
        for (int j = 2; j*j <= i; j++)
        {
            if(j*j==i){
                nor+=j;
            } else if(i%j==0){
                nor=nor+j+i/j;
            }
        }
        nor = nor*1.0/i;
        // printf("%f \n", nor);
        if(nor>max[1]){
            max[0] = i;
            max[1] = nor;
        } else if(nor < min[1])
        {
            min[0] = i;
            min[1] = nor;
        }
        
    }
    printf("%.0f %.0f", min[0], max[0]);
    return 0;
}