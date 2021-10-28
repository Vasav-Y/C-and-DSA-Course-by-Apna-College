// Vector --> Dynamic Array 
// We can define size of vector later and can change it

#include<iostream>
#include<vector> // header file to use vector in our code
using namespace std;

int main()
{
    vector<int> v;// we'll specify datatype of vector and the name of vector
    v.push_back(1);// 1 will be added to the end of the vector v
    v.push_back(2);// 2 will be added to the end of the vector v
    v.push_back(3);// 3 will be added to the end of the vector v

    // ! HOW TO TRAVERSE IN A VECTOR
    // *1 
    for(int i =0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }//1 2 3


    // *2
    vector<int>:: iterator it;
    for(it = v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<endl;// iterator it is a pointer
    }//1 2 3


    // *3
    for(auto element: v)
    {
        cout<<element<<endl;
    }

    v.pop_back();// the last element of the vector will be popped in this case it will be 3

    vector<int> v2 (3,50);
    // 50 50 50

    swap(v, v2); // swap the values of v and v2
    for(auto element: v)
    {
        cout<<element<<endl;
    }
    for(auto element: v2)
    {
        cout<<element<<endl;
    }

    // sort(v2.begin(), v2.end());// to sort the vector




    return 0;
}