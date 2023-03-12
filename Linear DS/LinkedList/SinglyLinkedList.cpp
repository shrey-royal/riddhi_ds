/*
insertion:
    1. At the beginning
    2. At the end
    3. At a given position

deletion:
    1. At the beginning
    2. At the end
    3. At a given position

searching:
    1. By value
    2. By position

traversal:
    1. Forward
    2. Reverse
*/

// #include<iostream>
// #include<string>
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;   // Data to be stored in node
        Node *next; // Pointer to next node
};

class Employee {
    public:
        string name;
        int age;
        float salary;
        Employee *next;
};


// Insertion at the beginning
void InsertAtBeginning(Node **head, int data) {
    //1. Allocate memory for new node
    Node *newNode = new Node(); //new is used to allocate memory in heap and returns a pointer to the allocated memory
    //2. put data in new node
    newNode->data = data;
    //3. Make next of new node as head
    newNode->next = *head;
    //4. Move head to point to new node
    *head = newNode;
}

//Traversal in forward direction
void PrintList(Node *head) {
    while(head != NULL){
        cout << head->data << ", ";
        head = head->next;
    }
}

//Traversal in reverse direction
void PrintListReverse(Node *head) {
    if(head == NULL) return;
    PrintListReverse(head->next);
    cout << head->data << ", ";
}

//Driver code
int main() {
    Node *head = NULL;  //Empty List
    
    //last in first out -> LIFO
    InsertAtBeginning(&head, 1);
    InsertAtBeginning(&head, 2);
    InsertAtBeginning(&head, 3);
    InsertAtBeginning(&head, 4);
    InsertAtBeginning(&head, 5);

    // PrintList(head);
    PrintListReverse(head);


    return 0;
}

//Time Complexity: O(1)
//Space Complexity: O(1)