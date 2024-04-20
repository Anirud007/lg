#include <iostream>
using namespace std; 

class Node {
    public:
    int data;
    Node* link;

    // constructor
    Node(int data) {
        this -> data = data;
        this -> link =  NULL;
    }
};

Node *head = NULL;

void InsertAtStart(int d) {
    Node* newnode =  new Node(d);
    newnode -> link = head;
    head = newnode;
}

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

void InsertAtPosition(int d, int pos) {
    Node* newnode = new Node(d);
    if (pos == 1) {
        newnode -> link = head;
        head = newnode;
    }
    else {
        Node* temp = head;
        for (int i  = 0; i < pos - 1; i++) {
            temp = temp -> link;
        }
        newnode -> link = temp -> link;
        temp -> link = newnode;
    }
}

void DelFromStart() {
    if ( head == NULL ) {
        cout << "Underflow" << endl;
    }
    else {
        Node *temp = head;
        head = head -> link;
        cout << "deleted element is " << temp -> data << endl;
        delete temp;
    }
}

void DelFromEnd() {
    if (head == NULL) {
        cout << "overflow" << endl;
    }
    else {
        Node *temp = head;
        Node *prev = head;
        while (temp -> link != NULL ) {
            prev = temp;
            temp = temp -> link;
        }
        prev -> link = NULL;
        cout << "deleted element is " << temp -> data << endl;
        delete temp;
    }
}

void DelFormPos(int pos) {
    if (head == NULL) {
        cout << "overflow" << endl;
    }
    else  {
        Node *temp = head;
        Node *prev = head;
        for(int i = 0; i < pos-1; i++) {
            prev = temp;
            temp = temp -> link;
        }
        cout << "deleted element is " << temp -> data << endl; 
        prev -> link = temp -> link;
        delete temp;
    }
}

void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp -> data << " " << "at " << temp -> link << endl;
        temp = temp -> link;
    }
}
 
void reverse() {
    Node* current = head;
    Node* prev = NULL;
    Node* forwd = NULL;
    while (current != NULL) {
        forwd = current -> link;
        current -> link = prev;
        prev = current;
        current = forwd;
    }
}

int main() {
    // Node* node1 = new Node(10);
    int num;
    cout << "enter the no of elements" << " ";
    cin >> num;
    int el;
    for(int i = 0; i < num; i++) {
        cout << "element" << " ";
        cin >> el;
        InsertAtStart(el);
    }
    display();
    reverse();
    display();
    return 0;
}
