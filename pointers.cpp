// Pointers: these are variables which stores the address of other variables

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     a = 9;
//     int* aptr;
//     aptr = &a;
//     cout<<a<<endl;//give the value of a
//     cout<<&a<<endl; // gives the value of address of a
//     cout<<aptr<<endl; //gives the value of address of a
//     cout<<*aptr<<endl; //gives the value of a /* ! also called dereferencing the pointer */
//     *aptr = 10;
//     cout<<a<<endl;
//     return 0;
// }

// ! Pointer Arithmetic
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int *aptr = &a;
//     cout<<aptr<<endl; //gives the value of address of a
//     aptr++;
//     cout<<aptr<<endl; // gives the value of address of a + size of int which in this case will be 4 bytes
//
//     return 0;
// }

// !Pointer and Arrays
// #include<iostream>
// using namespace std;
//
// int main()
// {
//     int arr[] = {10, 20, 30, 40};
//     // cout<<*arr<<endl;
//     int *ptr = arr;
//     //  *printing the elements of the array using pointer
//     // for(int i =0; i<4; i++)
//     // {
//     //     cout<<*ptr<<endl;
//     //     ptr++;
//     // }
//
//     // *printing the elements of the array using the array pointer
//     for(int i =0; i<4; i++)
//     {
//         cout<<*(arr+i)<<endl;
//         // arr++; it will be illegal
//         /* here arr is our indexing pointer so when we do (arr + i ) it goes to the next index instead of next memory address*/
//     }
//     /* hence we can see that arr is a pointer which points to the first element of the array */
//     return 0;
// }

// ! Pointer to Pointer
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int* p = &a;
//     int**q = &p;
//     cout<<*p<<endl;
//     cout<<*q<<endl;
//     cout<<**q<<endl;
//     return 0;
// }

// ! Implementation of Pointers
// * Passing Pointers to function

// #include<iostream>
// using namespace std;
//
// void increment(int *a)
// {
//     *a = *a +1;
// }
//
// int main()
// {
//     int a= 10;
//     int *ptr = &a;
//     increment(ptr);
//     cout<<a<<endl;
//     return 0;
// }

// * swapping two integers
#include <iostream>
using namespace std;

void swap(int *num1, int *num2)
{
    int temp;
    temp = *num2;
    *num2 = *num1;
    *num1 = temp;
}

int main()
{
    int a = 4, b = 9;
    cout << a << endl<< b << endl;
    swap(&a, &b);
    cout << a << endl<< b << endl;

    return 0;
}