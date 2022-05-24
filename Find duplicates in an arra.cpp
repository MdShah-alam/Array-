#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[abs(a[i])]>=0)
            a[abs(a[i])]=-a[abs(a[i])];
        else
            cout<<abs(a[i])<<" ";
    }
}
/**
Input:
N = 5
a[] = {2,3,1,2,3}
Output: 2 3
Explanation: 2 and 3 occur more than once
in the given array.
*/
