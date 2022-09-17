#include <iostream>
using namespace std;

// Declaring a Linked List
struct list
{
    int data;
    list *link; // Pointer to the structure
} data1, data2, data3;

// Making the lists
int main()
{
    data1.link = &data2; // link to data2

    data2.link = &data3; // link to data 3
    data3.link = NULL;   // Marks the end of the list
}