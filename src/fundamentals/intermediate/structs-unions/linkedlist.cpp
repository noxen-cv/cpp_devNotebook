// the use of linked list in c++ using self referencial structure 
#include <iostream>

using namespace std;

struct node {
    int data;
    struct node* next;
};

int main() {
    
    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* last = new node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = last;

    last->data = 40;
    last->next = nullptr;

    node* temp = head;      // Initializes and print the linked lists
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;  // Moves to the next node
    }
    

    return 0;

}