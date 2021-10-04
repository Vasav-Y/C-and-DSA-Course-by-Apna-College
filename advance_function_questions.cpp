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

// void triplet(int a, int b, int c);

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

//     return 0;
// }

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


