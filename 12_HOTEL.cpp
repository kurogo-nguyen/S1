#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n%3==0)
        printf("%d", n/3);
    else if(n%3==1)
        printf("%d %d", 2, n/3-1);
    else if(n%3==2)
        printf("%d %d", 1, n/3);
    return 0;
}
