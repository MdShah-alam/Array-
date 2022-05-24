#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int curr_sum=0;
    for(int i=0;i<n;i++)
    {
        curr_sum=a[i];
        for(int j=i+1;j<=n;j++)
        {
            if(curr_sum==sum)
            {
                cout<<i+1<<" position to "<<j;
                return 1;
            }
            if(curr_sum>sum||j==n)
                break;
            curr_sum=curr_sum+a[j];
        }
    }
}
/**
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements
from 2nd position to 4th position
is 12.
*/
