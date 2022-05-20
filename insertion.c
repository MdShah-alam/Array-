#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int temp=10;
    int p;
    scanf("%d",&p);
    for(int i=n-1; i>=p-1; i--)
    {
          a[i+1]=a[i];
    }
    a[p-1]=temp;
    for(int i=0; i<=n; i++)
    {
        printf("%d ",a[i]);
    }

}
