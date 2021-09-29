// printing all the prime numbers between two given numbers

/* MY CODE */

// #include<iostream>
// using namespace std;

// void prime_nums(int n1, int n2);

// int main()
// {
//     int num1, num2;
//     cout<<"Enter two numbers : ";
//     cin>>num1>>num2;
//     cout<<"All the prime numbers between entered numbers are : \n";
//     prime_nums(num1, num2);

//     return 0;
// }

// void prime_nums(int n1, int n2)
// {
//     int flag;
//     for(int i = n1; i<n2; i++)
//     {
//         flag = 0;
//         for(int j = 2; j<i; j++)
//         {
//             if(i%j==0)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0)
//         {
//             cout<<i<<endl;
//         }
//     }
// }

/* CODE IN VIDEO */
// #include<iostream>
// #include<cmath>
// using namespace std;

// bool isPrime(int n);

// int main()
// {
//     int n1, n2;
//     cout<<"Enter the two numbers : ";
//     cin>>n1>>n2;
//     for(int i = n1; i<=n2; i++)
//     {
//         if(isPrime(i))
//         {
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

// bool isPrime(int n)
// {
//     int flag = 0;
//     for(int j=2; j<=sqrt(n); j++)
//     {
//         if(n%j == 0)
//         {
//             return false; //after this we'll be out of the function, we don't need to use any break function
//         }
//     }
//     return true;
// }

/* FIBONACCI SEQUENCE */
// #include <iostream>
// using namespace std;

// void fib(int n);

// int main()
// {
//     int n;
//     cout << "Enter the numbers of terms needed : ";
//     cin >> n;
//     fib(n);
//     return 0;
// }

// void fib(int n)
// {
//     int n1 = 0, n2 = 1, n3;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << n1 << endl;
//         n3 = n2 + n1;
//         n1 = n2;
//         n2 = n3;
//     }
//     return ;
// }

/* FACTORIAL */
/* USING RECURSION */
// #include <iostream>
// using namespace std;

// int fact(int n);

// int main()
// {
//     int n;
//     cout << "Enter the number whose factorial is needed : ";
//     cin >> n;
//     cout << "Factorial of given number is : " << fact(n) << endl;
//     return 0;
// }

// int fact(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * fact(n - 1);
//     }
// }


/* CALCULATE nCr */

// #include <iostream>
// using namespace std;

// int fact(int n);
// int nCr(int n, int r);

// int main()
// {
//     int n,r;
//     cout << "Enter the values of n and r : ";
//     cin >> n>>r;
//     cout << "nCr : " << nCr(n,r) << endl;
//     return 0;
// }

// int fact(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * fact(n - 1);
//     }
// }

// int nCr(int n, int r)
// {
//     int a, b, c;
//     a = fact(n);
//     b = fact(n-r);
//     c = fact(r);
//     return (a/(b*c));
// }


/* PASCAL TRIANGLE */
/* IMPORTANT */

#include <iostream>
using namespace std;

int fact(int n);
int nCr(int n, int r);

int main()
{
    int n;
    cout << "Enter the values of n : ";
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        for(int j =0; j<=i;j++)
        {
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int nCr(int n, int r)
{
    int a, b, c;
    a = fact(n);
    b = fact(n-r);
    c = fact(r);
    return (a/(b*c));
}