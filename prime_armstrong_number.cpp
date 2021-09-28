/* To check a number is prime or not */

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num, flag = 1;
//     cout<<"Enter the number : ";
//     cin>>num;
//     for(int i = 2; i<num; i++)
//     {
//         if(num%i == 0)
//         {
//             cout<<"The number is not prime number ";
//             flag = 0;
//             break;
//         }
//     }
//     if(flag == 1)
//     {
//         cout<<"The given number is prime number ";
//     }
//     return 0;
// }

// To make this code shorter by checking till sqrt(n) instead of n
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int num, flag = 1;
//     cout<<"Enter the number : ";
//     cin>>num;
//     for(int i = 2; i<=sqrt(num); i++)
//     {
//         if(num%i == 0)
//         {
//             cout<<"The number is not prime number ";
//             flag = 0;
//             break;
//         }
//     }
//     if(flag == 1)
//     {
//         cout<<"The given number is prime number ";
//     }
//     return 0;
// }

/* How to reverse a number */
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num, reverse = 0, lastdigit;
//     cout<<"Enter the number : ";
//     cin>>num;
//     while(num>0)
//     {
//         lastdigit = num%10;
//         reverse = reverse*10 + lastdigit;
//         num = num/10;
//     }

//     cout<<"The reverse of number entered is : "<<reverse;

//     return 0;
// }

/* Armstrong Number */
// sum of cube of each digit is equal to the number itself

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int num, digit, sum = 0, originaln ;
    cout << "Enter the number : ";
    cin >> num;
    originaln = num;
    while (num > 0)
    {
        digit = num % 10;
        sum += pow(digit, 3);
        num = num / 10;
    }
    if (originaln == sum)
    {
        cout << "The given number is Armstrong Number ";
    }
    else
    {
        cout << "The given number is not an Armstrong Number ";
    }

    return 0;
}
