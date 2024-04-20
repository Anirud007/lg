#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* link;

    Node (int data) {
        this -> data = data;
        this -> link = NULL;
    }
};
Node* head = NULL;

void InsertAtEnd(int d)
{
    Node* newnode = new Node(d);
    if (head ==  NULL) {
        head = newnode;
    }
    else  {
        Node* temp = head;
        while (temp -> link != NULL) {
            temp = temp -> link;
        }
        temp -> link = newnode;
    }     
}

void rev() {

}

void print()
{
    Node* temp = head;
    while (temp != NULL) {
        cout << temp -> data << endl;
        temp = temp -> link;  
    }
}

int main() {
    InsertAtEnd(10);
    InsertAtEnd(20);
    InsertAtEnd(30);
    InsertAtEnd(40);
    InsertAtEnd(50);
    print();
    return 0;
}