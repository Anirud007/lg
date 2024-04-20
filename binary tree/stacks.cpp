#include <iostream>
#include <stack> 
using namespace std;
class Stack {
    public:
    int *arr;
    int top;
    int size;

    Stack (int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int el) {

    }
    
    void pop() {

    }

    int peek() {

    }
    
    bool isempty() {

    }
};



int main() {
    stack<int> s;
    s.push(2);
    s.push(3);

    s.pop();

    cout << "printing top element" << s.top() << endl;

    if(s.empty()) {
        cout << "stack is empty" << endl;
    }
    else {
        cout << "stack is not empty" << endl;
    }

    cout << s.size() << endl;

    return 0;
    
}