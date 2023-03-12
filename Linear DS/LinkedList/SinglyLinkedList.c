#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void InsertAtBeginning(struct Node **head, int data) {
    //1. Allocate memory for new node
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));

    //2. Put in the data
    newNode->data = data;

    //3. Make next of new node as head
    newNode->next = *head;

    //4. Move the head to point to new node
    *head = newNode;
}

//Traversal of linked list
void PrintList(struct Node *head) {
    // struct Node *temp = head;
    // while (temp != NULL) {
    //     printf("%d, ", temp->data);
    //     temp = temp->next;
    // }

    if(head == NULL) return;
    printf("%d, ", head->data);
    PrintList(head->next);
}

//Driver program
int main() {
    struct Node *head = NULL;
    InsertAtBeginning(&head, 2);
    InsertAtBeginning(&head, 4);
    InsertAtBeginning(&head, 6);
    InsertAtBeginning(&head, 8);
    PrintList(head);
    return 0;
}