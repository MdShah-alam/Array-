#include<stdio.h>

int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void reverse_sort(int n, int a[])
{
    for(int steps=0; steps<n; steps++)
    {
        int minelement=a[steps],pos=steps;
        for(int i=steps+1; i<n; i++)
        {
            if(minelement<a[i])
            {
                minelement=a[i];
                pos=i;
            }
        }
        swap(&a[steps],&a[pos]);
        printf("Steps  %d\n",steps);
        printf("min : %d at pos %d\n",minelement,pos);
        for(int i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    reverse_sort(n,a);
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
