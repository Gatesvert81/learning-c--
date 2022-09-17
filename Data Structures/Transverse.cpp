#include <iostream>
using namespace std;

// Creating a Node structure
struct Node
{
    int data;
    Node *next;
};

Node *head;

// Insert into list at a first position

void insert(int data)
{
    // Create a pointer variable that holds a pointer to a Node
    Node *temp = new Node;
    // Assign the parameters to the node values, i.e (data, ptr to nest node )
    temp->data = data;
    temp->next = head;
    // Assign tthe head to the first node
    head = temp;
}

// Insert into list at a particular position

void insert(int data, int position){
    // Create a pointer variable that holds a pointer to a Node
    Node* prev = new Node;
    // Assign the parameters to the node values, i.e (data, ptr to nest node )
    prev->data = data;
    prev->next = NULL;
    // Insert into first position 
    if (position == 1){
        // Assign new node next to the first node in the list
        prev->next = head;
        // Assign the new node pointer to the head
        head = prev;
        return;
    }
    // Create a new pointer to a node
    Node* next = head;
    // Find th position to insert new node 
    for (int i = 0; i < position - 2; i++)
    {
        //Assign the the pointer of the next node to the new pointer created
        next = next->next; 
    }
    // Assign the nest pointer to the new node created
    prev->next = next->next;
    //Assign the new node pointer to the previous node
    next->next = prev;
    
}

// Transverse / Print values in the node
void print()
{
    // Assign the head to a new pointer variable
    Node *temp = head;
    // Print the data of the node
    cout << "List is : ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        // Assign the temp to the next node
        temp = temp->next;
    }
    cout << endl ;
};

void deleteNode(int position){
    Node* prev = head;
    if ( position == 1){
        head = prev->next;
        delete prev;
        return;
    }
    //Find the postion to delete
    for (int i = 0; i < position - 2; i++)
    {
        // Get the node before the node we want to delete  
        prev = prev->next;
    }
    // Get the node we want to delete from the previous node next 
    Node* current;
    current = prev->next;
    // Assign the next node to the previous node next 
    prev->next = current->next;
    // Delete the current node 
    delete current;
}



int main()
{
    head = NULL; // Creat an empty list
    insert(2, 1);
    insert(3, 2);
    insert(4, 1);
    insert(5, 2);
    insert(5);
    insert(12);
    print();
    deleteNode(3);
    print();
}
