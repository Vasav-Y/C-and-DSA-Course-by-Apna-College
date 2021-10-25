// /* Sum of first n natural numbers*/

// #include <iostream>
// using namespace std;

// int totalSum(int n);

// int main()
// {
//     int n;
//     cout << "Enter the value of n : ";
//     cin >> n;
//     cout << "The sum of first n natural number is : " << totalSum(n) << endl;

//     return 0;
// }

// int totalSum(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

/* Check Pythagorean Triplet */
/* MY CODE */

// #include <iostream>
// #include <cmath>
// using namespace std;
// 
// void triplet(int a, int b, int c);
// 
// int main()
// {
//     int n = 3, x, y, z, max;
//     cout << "Enter three numbers : ";
//     cin >> x >> y >> z;
//     if (x > y)
//     {
//         if (x > z)
//         {
//             triplet(x, y, z);
//         }
//         else
//         {
//             triplet(z, x, y);
//         }
//     }
//     else
//     {
//         if (y > z)
//         {
//             triplet(y, x, z);
//         }
//         else
//         {
//             triplet(z, y, x);
//         }
//     }
// 
//     return 0;
// }
// 
// void triplet(int a, int b, int c)
// {
//     a = pow(a, 2);
//     b = pow(b, 2);
//     c = pow(c, 2);
//     if(a == (b+c))
//     {
//         cout<<"Given numbers are triplet \n";
//     }
//     else
//     {
//         cout<<"Given numbers are not triplet \n";
//     }
// }

/* CONVERSIONS */

//Binary to decimal

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main()
// {
//     int num, lastDigit, counter = 0, decnum = 0 ;
//     cout<<"Enter the binary number : ";
//     cin>>num;
//     while(num>0)
//     {
//         lastDigit = num%10;
//         decnum +=  lastDigit*pow(2, counter);
//         counter++;
//         num = num/10;
//     }
//     cout<<"Decimal number is : "<<decnum<<endl;

//     return 0;
// }

/* Octal to decimal */

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main()
// {
//     int num, lastDigit, counter = 0, decnum = 0 ;
//     cout<<"Enter the octal number : ";
//     cin>>num;
//     while(num>0)
//     {
//         lastDigit = num%10;
//         decnum +=  lastDigit*pow(8, counter);
//         counter++;
//         num = num/10;
//     }
//     cout<<"Decimal number is : "<<decnum<<endl;

//     return 0;
// }

/* Hexadecimal to decimal */
/* IMPORTANT */

// #include <bits/stdc++.h>
// using namespace std;

// int hexadecimalToDecimal(string n);

// int main()
// {
//     string n;
//     cin >> n;

// cout << hexadecimalToDecimal(n) << endl;
//     return 0;
// }

// int hexadecimalToDecimal(string n)
// {
//     int ans = 0;
//     int x = 1;
//     int s = n.size();

//     for (int i = s - 1; i >= 0; i--)
//     {
//         if (n[i] >= '0' && n[i] <= '9')
//         {
//             ans += x * (n[i] - '0');
//         }
//         else if (n[i] >= 'A' && n[i] <= 'F')
//         {
//             ans += x * (n[i] - 'A' + 10);
//         }
//         x *= 16;
//     }
//     return ans;
// }

/* DECIMAL TO BINARY */
/* IMPORTANT */
// #include <iostream>

// using namespace std;

// int decimalToBinary(int n);

// int main()
// {
//     int n;
//     cout << "Enter the decimal number : ";
//     cin >> n;

//     cout << "Binary number is : " << decimalToBinary(n) << endl;

//     return 0;
// }

// int decimalToBinary(int n)
// {
//     int x = 1;
//     int ans = 0;
//     while (x <= n)
//     {
//         x *= 2;
//     }
//     x = x / 2;
//     while (x > 0)
//     {
//         int lastDigit = n / x;
//         n -= lastDigit * x;
//         x /= 2;
//         ans = ans * 10 + lastDigit;
//     }
//     return ans;
// }

/* DECIMAL TO OCTAL */
// #include <iostream>

// using namespace std;

// int decimalToOctal(int n);

// int main()
// {
//     int n;
//     cout << "Enter the decimal number : ";
//     cin >> n;

//     cout << "Binary number is : " << decimalToOctal(n) << endl;

//     return 0;
// }

// int decimalToOctal(int n)
// {
//     int x = 1;
//     int ans = 0;
//     while (x <= n)
//     {
//         x *= 8;
//     }
//     x = x / 8;
//     while (x > 0)
//     {
//         int lastDigit = n / x;
//         n -= lastDigit * x;
//         x /= 8;
//         ans = ans * 10 + lastDigit;
//     }
//     return ans;
// }

/* DECIMAL TO HEXADECIMAL */
/* IMPORTANT */
// #include <bits/stdc++.h>

// using namespace std;

// string decimalToHexadecimal(int n);

// int main()
// {
//     int n;
//     cout << "Enter the decimal number : ";
//     cin >> n;

//     cout << "Binary number is : " << decimalToHexadecimal(n) << endl;

//     return 0;
// }

// string decimalToHexadecimal(int n)
// {
//     int x = 1;
//     string ans = "";
//     while (x <= n)
//     {
//         x *= 16;
//     }
//     x = x / 16;
//     while (x > 0)
//     {
//         int lastDigit = n / x;
//         n -= lastDigit * x;
//         x /= 16;
//         if (lastDigit <= 9)
//         {
//             ans = ans + to_string(lastDigit);
//         }
//         else
//         {
//             char c = 'A' + lastDigit - 10;
//             ans.push_back(c);
//         }
//     }
//     return ans;
// }

/* Addition of two binary numbers */
/* IMPORTANT */

#include <iostream>
using namespace std;

int reverseNum(int n);
int addBinary(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << addBinary(a, b);

    return 0;
}

int reverseNum(int n)
{
    int lastDigit, reverse = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n = n / 10;
    }
    return reverse;
}

int addBinary(int a, int b)
{
    int ans = 0;
    int prevCarry = 0;

    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 0;
        }
        else if ((a % 2 == 1 && b % 2 == 0) || (a % 2 == 0 && b % 2 == 1))
        {
            if (prevCarry == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 1;
        }
        a = a / 10;
        b = b / 10;
    }
    while (a > 0)
    {
        if (prevCarry == 1)
        {
            if (a % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (a % 2);
        }
        a = a / 10;
    }
    while (b > 0)
    {
        if (prevCarry == 1)
        {
            if (b % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (b % 2);
        }
        b = b / 10;
    }

    if (prevCarry == 1)
    {
        ans = ans * 10 + 1;
    }
    return reverseNum(ans);
}