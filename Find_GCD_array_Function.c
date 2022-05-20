#include<stdio.h>
int  gcd(int a,int b)
{
    while(b>0)
    {
        int d=a%b;
        a=b;
        b=d;
    }
    return a;
}

int  display(int n,int a[])
{
    int ans=a[0];
    for(int i=0; i<n; i++)
    {
        ans= gcd(ans,a[i+1]);
    }
    printf("GCD = %d",ans);

}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter input ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    display(n,a);
}
