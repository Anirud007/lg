#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node (int data) {
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

Node* head = NULL;

void ins_at_beg(int d) {
    Node* newnode = new Node(d);
    if (head == NULL) {
        head = newnode;
        newnode -> prev = newnode;
        newnode -> next = newnode;
    }
    else {
        Node* temp = head;
        newnode -> prev = temp -> prev;
        newnode -> next = head;
        temp -> prev = newnode;
        newnode -> prev -> next = head;
    }
}

void ins_at_end(int d) {
    Node* newnode = new Node(d);
    if (head == NULL) {
        head = newnode;
        newnode -> prev = newnode;
        newnode -> next = newnode;
    }
    else {
        Node* temp = head;
        newnode -> prev = temp -> prev;
        newnode -> next = head;
        temp -> prev = newnode;
    }
}

void del_at_beg()
{
    if (head == NULL) {
        cout << "overflow";
    }
    else {
        Node* temp = head;
        temp -> next -> prev = temp -> prev;
        temp -> prev -> next = temp -> next;
        head = temp -> next;
        delete temp;
    }
}

void del_at_end()
{
    if (head == NULL) {
        cout << "overflow";
    }
    else {
        Node* temp = head;
        Node* ptemp = head;
        Node* cur = head;
        while(temp -> next != head){
            ptemp = temp;
            temp = temp -> next;
        }
        cur -> prev = ptemp;
        ptemp -> next = head;
        delete temp; 
    }
}

int main() {

}