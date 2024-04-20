#include <iostream>
#include <queue>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node (int data) {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* insert(node* &root, int key) {
    if (root == NULL)
    {
        root = new node(key);
        return root;
    }
    if (root -> data > key) {
        root -> left = insert(root -> left, key);
    }
    else {
        root -> right = insert(root -> right, key);
    }
    return root;
}

void take(node* &root) {
    int data;
    cin >> data;
    while (data != -1) {
        insert(root, data);
        cin >> data;
    } 
}

// finding level of a node

int gl(node* root, int key, int level) {
    if (root == 0) {
        return 0;
    }
    if (root -> data == key) {
        return level;
    }
    int d = gl(root -> left, key, level + 1);
    if (d != 0) {
        return d;
    }
    d = gl(root -> right, key, level + 1);
    return d;
}
int main() {
    node* root = NULL;
    take(root);
    cout << gl(root, 35, 1);
    return 0;
    // 10 20 30 40 15 25 35 -1
}

#include <iostream> 
using namespace std; 

int main() {
    int data;
    cin >> data;
    cout << data << endl; 
}