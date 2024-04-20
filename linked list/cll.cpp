#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node (int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

Node* head = NULL;

void ins_at_head(int d) {
    Node* newnode = new Node(d);
    if (head == NULL) {
        newnode -> next = newnode;
        head = newnode;
    }
    else {
        Node* temp = head;
        while(temp -> next != head) {
            temp = temp -> next;
        }
        temp -> next = newnode;
        newnode -> next = head;
        head = newnode;
    }
}

void ins_at_tail(int d) {
    Node* newnode = new Node(d);
    Node* temp = head;
    if (head == NULL) {
        newnode -> next = newnode;
        head = newnode;
    }
    else {
        while(temp -> next != head) {
            temp = temp -> next;
        }
        temp -> next = newnode;
        newnode -> next = head;
    }
}

void ins_at_pos(int pos, int d) {
    Node* newnode = new Node(d);
    Node* temp = head;
    if (pos == 1) {
        while (temp != head) {
            temp = temp -> next;
        }
        temp -> next = newnode;
        newnode -> next = head;
        head = newnode;
    }
    else {
        for (int i = 0; i < pos - 1; i++) {
            temp = temp -> next;
        }
        temp -> next = newnode -> next;
        temp -> next = newnode;
    }
}
void del_at_beg() {
    if (head == NULL) {
        cout << "overflow";
    }
    else {
        Node* temp = head;
        Node* com = head;
        while(temp -> next != head) {
            temp = temp -> next;
        }
        head = com -> next;
        delete com;
        temp -> next = head;

    }
}
void del_at_end() {
    if (head == NULL) {
        cout << "overflow";
    }
    else {
        Node* temp = head;
        Node* ptemp = head;
        while(temp -> next != head) {
            ptemp = temp;
            temp = temp -> next;
        }
        ptemp -> next = head;
        delete temp;

    }
}
void display() {
    Node* temp = head;
    while (temp -> next != head) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    ins_at_head(10);
    ins_at_tail(20);
    display();
    return 0;
}