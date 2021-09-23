#include <iostream>
using namespace std;

int main()
{
    // * break: terminates the loop
    // * continue : jumps to the next iteration

    // !pocketMoney
    //     int pocketMoney = 3000;
    //     for (int day = 1; day <= 30; day++)
    //     {
    //         if (day % 2 == 0)
    //         {
    //             continue;
    //         }
    //
    //         if(pocketMoney==0)
    //         {
    //             break;
    //         }
    //         cout << "You can go out today!!\n";
    //     }

    // * to check whether a number is prime or not

    //     int num;
    //     cin>>num;
    //
    //     for(int i = 2; i<num; i++)
    //     {
    //         if(num%i == 0)
    //         {
    //             cout<<"The given number is not prime \n";
    //             break;
    //         }
    //         if(i = num-1){
    //             cout<<"The given number is prime \n";
    //         }
    //     }

    // * print all the prime numbers between two numbers
    int a, b, i, j;
    cin >> a >> b;
    for ( i = a + 1; i < b; i++)
    {
        for ( j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            
        }
        if (j == i)
            {
                cout << i << endl;
            }
    }
    return 0;
}