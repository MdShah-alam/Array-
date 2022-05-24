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
    int max_from_right=a[n-1];
    cout<<max_from_right<<" ";
    for(int i=n-2; i>=0; i--)
    {
        if(max_from_right<a[i])
        {
            max_from_right=a[i];
            cout<<max_from_right<<" ";
        }
    }

}
/**
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
*/
