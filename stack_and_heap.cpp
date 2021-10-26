// Heap is also known as free store because size of heap is not fixed
// Size of Stack is fixed
// In stack memory gets allocated and deallocated automatically but in Heap we've to allocate and deallocate memory manually
//  If we don't deallocate memory in Heap it'll lead to memory leak

// Variable of Heap acts as a Global variable

#include<iostream>
using namespace std;

int main()
{
    int a= 10; // stored in stack
    int* p = new int(); // allocate memory in heap
    *p =10;  // assinging value 
    delete(p); // deallocate memory 

    /* Now our p will be a dangling pointer because it is poiinting to a memory address where no value is stored*/
    p = new int[4]; // to allocate memory to an array
    delete[]p; // will delete the block of memory allocated to the array 
    p = NULL;
    return 0;
}