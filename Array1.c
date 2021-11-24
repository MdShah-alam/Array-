#include<stdio.h>
int main()
{
    int n,num[100];
    printf("how many numbers= ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int max=num[0];
    for(int i=1;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("maximum=%d\n",max);
}
