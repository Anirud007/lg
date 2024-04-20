#include <iostream> 
using namespace std;

class Node {
    public:
    int data;
    Node* link;

    Node(int data) {
        this -> data = data;
        this -> link = NULL;
    }
};

Node* head = NULL;

void ins_at_start(int d) {
    Node* newnode = new Node(d);
    newnode -> link = head;
    head = newnode;
}

void ins_at_end(int d) {
    Node* newnode = new Node(d);
    if (head == NULL) {
        head = newnode;
    }
    else {
        Node* temp = head;
        while(temp -> link != NULL) 
        {
            temp = temp -> link;
        }
        temp -> link = newnode;
    }
}

void ins_at_pos(int d, int pos) {
    Node* newnode = new Node(d);
    if (pos == 1) {
        newnode -> link = head;
        head = newnode;
    }
    else {
        Node* temp = head;
        for (int i = 0; i < pos - 1; i++) 
        {
            temp = temp -> link;
        }
        temp -> link = newnode -> link;
        temp -> link = newnode;
    }
}

void del_start() {
    if (head == NULL) {
        cout << "overflow " << endl;
    }
    else {
        Node* temp = head;
        head = head -> link;
        delete temp;
    }
}

void del_end() {
    if (head == NULL){
        cout << "overflow" << endl;
    }
    else {
        Node* temp = head;
        Node* prev = head;
        while (temp -> link != NULL) {
            prev = temp;
            temp = temp -> link;
        }
        prev -> link = NULL;
        delete temp;
    }
}

void del_pos(int pos) {
    if (head == NULL) {
        cout << "overflow " << endl;
    }
    else {
        Node* temp = head;
        Node* prev = head;
        for(int i = 0; i < pos - 1; i++) {
            prev = temp;
            temp =  temp -> link;
        }
        prev -> link = temp -> link;
        delete temp;
    }
}

void print() {
    Node* temp = head; 
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> link;
    }
    cout << endl;
}

void rev() {
    Node* prev = NULL;
    Node* cur = head;
    Node* fwd = NULL;
    while (cur != NULL) {
        fwd = cur -> link;
        cur -> link = prev;
        prev = cur;
        cur = fwd;
    }
}
int main() {
    ins_at_end(10);
    ins_at_end(20);
    ins_at_end(30);
    cout << "before" << endl;
    print();
    cout << "after" << endl;
    rev();
    print();
    return 0;
}