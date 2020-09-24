#include <stdio.h>

int main()
{
    int n, t, f, x;
    scanf("%d %d %d %d", &n, &t, &f, &x);
    int timeLeft = (t-1)*60 - (n-f)*x;
    if(timeLeft==0)
        printf("EXACT!");
    else if (timeLeft > 0)
        printf("Yes \n%d", timeLeft);
    else
        printf("No \n%d\n%d", -timeLeft, 1-timeLeft/x);
    return 0;
}
