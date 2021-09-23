// #include<iostream>
// using namespace std;
// 
// int main()
// {
//     int savings;
//     cout<<"Enter the amount of money that you have saved"<<endl;
//     cin>>savings;
// 
//     if(savings >5000)
//     {
//         if(savings >10000)
//         {
//             cout<<"Roadtrip with Neha\n";
//         }
//         else 
//         {
//             cout<<"Shopping with Neha\n";
//         }
// 
//     }
//     else if(savings >2000)
//     {
//         cout<<"Rashmi";
//     }
//     else
//     {
//         cout<<"Friends";
//     }
// }

//Questions

//To find largest of three numbers

// #include<iostream>
// using namespace std;
// 
// int main()
// {
//     int a, b, c;
//     cout<<"Enter the value of three integers:\n";
//     cin>>a;
//     cin>>b;
//     cin>>c;
//     // alternately also be written as --> cin>>a>>b>>c;
//     if(a>b && a>c)
//     {
//         cout<<"a is the greatest of all the integers given\n";
//     }
//     else if(b>a && b>c)
//     {
//         cout<<"b is the greatest of all the integers given\n";
//     }
//     else if(b==a && a==c)
//     {
//         cout<<"All the given integers are equal\n";
//     }
// 
//     else 
//     {
//         cout<<"c is the greatest of all the integers given\n";
//     }
//     return 0;
// }

//Checking whether given integer is even or odd\

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the value of the integer\n";
    cin>>num;

    if(num% 2 == 0)
    {
        cout<<"Given integer i.e ";
        cout<< num;
        cout<<" is even";
    }
    else 
    {
        cout<<"Given integer i.e ";
        cout<< num;
        cout<<" is odd";
    }

    return 0;
}