#include <stdio.h>

int main()
{
    int n ,m;
    scanf("%d %d", &n, &m);
    int count =0;
    while (n>1 && m>0)
    {
        n--;
        m--;
        count+=2;
    }
    if(m==0){
        count--;
    }
    printf("%d", count);
    return 0;
}
