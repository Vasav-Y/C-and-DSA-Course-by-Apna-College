/* Function is a piece of code written to do a specific task */
#include <iostream>
using namespace std;

void print(int num);
int add(int num1, int num2);

int main()
{
    int n1, n2, sum;
    cout << "Enter two numbers : ";
    cin>>n1>>n2;
    sum = add(n1, n2);
    cout << "The sum of numbers is : " << sum << endl;

    return 0;
}

void print(int num)
{
    cout << "Number is : " << num << endl;
    return;
}
int add(int num1, int num2)
{
    int sum = num1 + num2;
    print(num1);
    print(num2);
    return sum;
}
