#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> prev =  NULL;
        this -> next =  NULL;
    }
};
Node *head = NULL;

void insAtBeg(int d) {
    Node *newnode = new Node(d);
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode -> next = head;
        head -> prev = newnode;
        head = newnode;
    }
}

int main() {
    Node *node1 = new Node(10);
    return 0;
}