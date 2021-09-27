/* inverted pattern */
// #include<iostream>
// using namespace std;
// int main()
// {
//     int row = 5;
//     for(int i = row; i>0; i--)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* 0-1 Pattern */
//my code
// #include<iostream>
// using namespace std;
// int main()
// {
//     int row = 5;
//     int sum = 0;
//     int num = 1;
//     for(int i= 1; i<=row; i++)
//     {
//         for(int j = 1; j<=i ; j++)
//         {
//             if(sum%2==0)
//             {
//                 cout<<num<<" ";
//                  sum+=num;

//             }
//             else if(sum%2 != 0)
//             {
//                 cout<<num-1<<" ";
//                  sum+=num;
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// code in video
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     n = 5;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j =1; j<=i; j++)
//         {
//             if((i+j)%2 == 0)
//             {
//                 cout<<" 1";
//             }
//             else
//             {
//                 cout<<" 0";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* Rhombus pattern question */
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for(int i = 1; i<= n; i++)
//     {
//         for(int k=1; k<=n-i; k++)
//         {
//             cout<<" ";
//         }
//         for(int j =1; j<= n; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* Number Pattern */
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for(int i = 1; i<= n; i++)
//     {
//         for(int k=1; k<=n-i; k++)
//         {
//             cout<<" ";
//         }
//         for(int j =1; j<= i; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* IMPORTANT */
/* Palindromic Pattern */
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, j, k;
//     n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         k = i;
//         for (; j <= n; j++)
//         {
//             cout << k--;
//         }
//         k = 2;
//         for (; j <= n + i - 1; j++)
//         {
//             cout << k++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

/* Star Pattern */
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int k = 1; k<=n-i; k++)
//         {
//             cout<<" ";
//         }
//         for(int j = 1; j<=2*i -1; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//      for(int i = n; i>0; i--)
//     {
//         for(int k = 1; k<=n-i; k++)
//         {
//             cout<<" ";
//         }
//         for(int j = 1; j<=2*i -1; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* Zig-Zag Pattern */
#include <iostream>
using namespace std;
int main()
{
    int n = 9;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0)
            {
                cout << "*";
            }

            if (i == 2 && j % 4 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}