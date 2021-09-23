#include<iostream>
using namespace std;

int main()
{
    int a;//declaration
    a = 12; //initialisation
    cout<< "The value of a and size of a is : "<<a<<" and "<<sizeof(a)<<endl;

    float b;
    b = 12.232;
    cout<< "The value of b and size of b is : "<<b<<" and "<<sizeof(b)<<endl;


    char c;
    c = 'g';
    cout<< "The value of c and size of c is : "<<c<<" and "<<sizeof(c)<<endl;


    bool d;
    d = 1;
    cout<< "The value of d and size of d is : "<<d<<" and "<<sizeof(d)<<endl;

    short int si;
    

    long int li;
   
        cout<< "The size of si is : "<<sizeof(si)<<endl;
        cout<< "The size of li is : "<<sizeof(li)<<endl;




    return 0;
}