#include <iostream> 
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

Node* head = NULL;

void insert_at_beg(int d) {
    Node* newnode = new Node(d);
    if (head == NULL) {
        head = newnode;
    }
    else {
        newnode -> next = head;
        head -> prev = newnode;
        head = newnode;
    }
}

void ins_at_end(int d) 
{
    Node* newnode = new Node(d);
    if (head == NULL) {
        head = newnode;
    }
    else {
        Node* temp = head;
        while (temp -> next != NULL) {
            temp = temp -> next;
        }
        temp -> next = newnode;
        newnode -> prev = temp;
    }
}

void ins_at_pos(int d, int pos) {
    Node* newnode = new Node(d);
    if (pos == 1) {
    }
    else
    {
        Node* temp = head;
        Node* prevtemp = head;
        for (int i = 0; i < pos - 1; i++) {
            prevtemp = temp;
            temp = temp -> next;
        }
        prevtemp -> next = newnode;
        newnode -> prev = prevtemp;
        newnode -> next = temp;
        temp -> prev = newnode;
        prevtemp -> next = newnode;
    }
}

void del_at_beg() {
    if (head == NULL) {
        cout << "overflow" << endl;
    }
    else {
        Node* temp = head;
        head = temp -> next;
        head -> prev = NULL;
        delete temp;
    }

}

void del_at_end() {
    if (head == NULL) {
        cout << "overflow" << endl;
    }
    else  {
        Node* temp = head;
        Node* tprev = head;
        while (temp -> next != NULL) {
            tprev = temp;
            temp = temp -> next;
        }
        tprev -> next = NULL;
        delete temp;
    }

}

void del_at_pos(int pos) {
    if (head == NULL) {
        cout << "overflow" << endl;

    }
    if (pos == 1) {

    }
    else {
        Node* temp = head;
        Node* tprev = head;
        for (int i = 0; i < pos - 1; i++) {
            tprev = temp;
            temp = temp -> next;
        }
        tprev -> next = temp -> next;
        temp -> next -> prev = temp -> prev;
        delete temp;
    }
}

void print()
{
    Node* temp = head;
    while (temp != NULL) {
        cout << temp -> data << " --> ";
        temp = temp -> next;
    }
}

int main() {
    insert_at_beg(20);
    insert_at_beg(10);
    ins_at_pos(15,2);
    ins_at_end(30);
    ins_at_end(40);
    // del_at_beg();
    // del_at_end();
    // del_at_pos(2);
    print();
    return 0;
}