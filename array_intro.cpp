// Array is a list of variables of similar types

// #include <iostream>
// using namespace std;
// int main()
// {
//     // int array[4] = {1,2,3,4}; //one way of initialising an array
//     int array[4];
//     for (int i = 0; i < 4; i++)
//     {
//         cout << "Enter the value of element " << i + 1 << " : ";
//         cin >> array[i];
//     }
// cout << "Elements of array are :  ";
// for (int i = 0; i < 4; i++)
// {
//    cout<< array[i]<<endl;
// }
//     return 0;
// }

/* PRINTING MAX AND MIN FROM THE NUMBERS GIVEN BY THE USER */

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, minNo = INT_MAX, maxNo = INT_MIN;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of element " << i + 1 << " : ";
        cin >> array[i];
    }

    //one way of doing without using the built in functions

    // for (int i = 0; i < n; i++)
    // {
    //     if (array[i] > maxNo)
    //     {
    //         maxNo = array[i];
    //     }
    //     if (array[i] < minNo)
    //     {
    //         minNo = array[i];
    //     }
    // }

    // by using built in functions
    for(int i =0; i<n; i++)
    {
        maxNo = max(maxNo,array[i]);
        minNo = min(minNo, array[i]);
    }
    cout << "The max and min values are : " << maxNo << " and " << minNo << endl;

    return 0;
}