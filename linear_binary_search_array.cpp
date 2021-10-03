
/* MY CODE */
#include <iostream>
using namespace std;


int main()
{
    int n, key, flag = 0;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array : \n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter the value of key : ";
    cin>>key;
    for(int i =0 ; i<n; i++)
    {
        if(arr[i] == key)
        {
            cout<<"Key found at "<<(i+1)<<"position \n";
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"Key does not exist in the array :(";
    }
    return 0;
}