#include <stdio.h>
int main ()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        printf(" 0 ");
    }
    else
    {
        for(i=0; i<n; i++)
        {
            sum+= a[i];
        }
        printf("sum:%d",sum);
    }
    return 0;
}
