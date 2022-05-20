#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p;
    scanf("%d",&p);
    for(int i=p;i<n;i++)
    {
        a[i-1]=a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
}
