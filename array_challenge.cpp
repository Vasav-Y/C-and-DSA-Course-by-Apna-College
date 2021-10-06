/* Maximum till ith index */

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n, mx = INT_MIN;
    cout<<"Enter the size of the array : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i =0; i<n; i++)
    {
        mx = max(mx, arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}