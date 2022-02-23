#include<stdio.h>
int main()
{
    int n1,n2,i,h;
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            h=i;
        }
    }
    printf("%d",h);
    return 0;
}