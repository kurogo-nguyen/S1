#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int point[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &point[i]);
    }

    int award[]={0,0};
    for (int i = 0; i < n; i++)
    {
        if(point[i]>award[0]){
            award[1]=award[0];
            award[0]=point[i];
        } else if(point[i] !=award[0] && point[i]>award[1])
        {
            award[1]=point[i];
        }
        
    }
    printf("%d", award[1]);
    
    return 0;
}
