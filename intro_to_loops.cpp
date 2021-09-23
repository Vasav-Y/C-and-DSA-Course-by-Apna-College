//for loop

// #include<iostream>
// using namespace std;
//
// int main()
// {
//     int n, sum;
//     sum = 0;
//     cout<<"Enter the value of n\n";
//     cin>>n;
//
//     for(int counter = 1; counter <= n; counter++)
//     {
//         sum+= counter;
//     }
//     cout<<"The value of sum is : ";
//     cout<< sum;
//
//     return 0;
// }

//while loop
// #include<iostream>
// using namespace std;
//
// int main()
// {
//     int n;
//     cout<<"Enter the value of the integer : ";
//     cin>>n;
//
//     while( n>0)
//     {
//         cout<<"Enter the number vro: ";
//         cin>>n;
//         cout<<n;
//     }
//     return 0;
// }

//do -while loop
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the value of n : ";
    cin >> n;

    do
    {
        cout<<"\n The ouput is : ";
        cout << n;
        cout << "\nEnter the value of n bhaiya ji : ";
        cin >> n;
    } while (n > 0);

    return 0;
}