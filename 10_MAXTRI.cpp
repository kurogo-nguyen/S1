#include <stdio.h>
bool used[]={false, false, false};
int max=0;
int val=0;

void setMax(int a[], int n, int pos){
    if(pos == n){
        if(val > max)
            max = val;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(!used[i]){
            used[i]=true;
            val= val*10+a[i];
            setMax(a, n, pos+1);
            used[i]=false;
            val =(val-a[i])/10;
        }
    }
    return;
}

int main()
{
    int n=3;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    setMax(a, n, 0);
    printf("%d", max);
    return 0;
}
