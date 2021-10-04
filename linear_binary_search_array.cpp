
/* MY CODE */
// #include <iostream>
// using namespace std;


// int main()
// {
//     int n, key, flag = 0;
//     cout << "Enter the size of array : ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements of array : \n";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout<<"Enter the value of key : ";
//     cin>>key;
//     for(int i =0 ; i<n; i++)
//     {
//         if(arr[i] == key)
//         {
//             cout<<"Key found at "<<(i+1)<<"position \n";
//             flag = 1;
//             break;
//         }
//     }
//     if(flag == 0)
//     {
//         cout<<"Key does not exist in the array :(";
//     }
//     return 0;
// }

/* CODE IN VIDEO */
// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int n, int key);

// int main()
// {
//     int n, key;
//     cout << "Enter the size of array : ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements of array : \n";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout<<"Enter the value of key : ";
//     cin>>key;
//     cout<<linearSearch(arr, n, key);
    
//     return 0;
// }

// int linearSearch(int arr[], int n, int key)
// {
//     for(int i =0 ; i<n; i++)
//     {
//         if(arr[i] == key)
//         {
//            return i;
//         }
//     }
//     return -1;
// }

/* BINARY SEARCH */
// for binary search our array should be sorted
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key);

int main()
{
    int n, key;
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
    cout<<binarySearch(arr, n, key);
    
    return 0;
}

int binarySearch(int arr[], int n, int key)
{
    int s= 0 ;
    int e = n;
    while(s <= e)
    {
        int mid = (s+e)/2;

        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e = mid -1;
        }
        else 
        {
            s = mid +1;
        }
    }
    return -1;
}