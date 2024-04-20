#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node (int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

int find_min(node* &root) {
    node* temp = root;
    while (temp -> left != NULL) {
        temp = temp -> left;
    }
    return temp -> data;
}

node* delformBST(node* &root , int val) {
    // base case 
    if(root == NULL ){
        return root;
    }
    if (root -> data == val) {
        // 0 child 
        if (root -> left == NULL && root -> right == NULL) {
            delete root;
            return NULL;
        }
        // 1 child 
        // right child
        if (root -> left == NULL && root -> right != NULL) {
            node* temp = root -> right;
            delete root;
            return temp;
        }
        // left child
        if (root -> left != NULL && root -> right == NULL) {
            node* temp = root -> left;
            delete root;
            return temp;
        }
        // 3 child
        if (root -> right != NULL && root -> left != NULL) {
            int minval = find_min(root);
            root -> data = minval;
            root -> right = delformBST(root -> right, minval);
            return root;
        }
    }
    if (root -> data > val) {
        root -> left = delformBST(root -> left, val);
        return root;
    }
    else {
        root -> right = delformBST(root -> right, val);
        return root;
    }
}

node* insert(node* &root, int d) {
    if (root == NULL) {
        root = new node(d);
        return root;
    }
    if(root -> data < d)
    {
        root -> right = insert(root -> right, d);
    }
    else {
        root -> left = insert(root -> left, d);
    }
    return root;
}

void inorder(node* &root) {
    if (root == NULL) {
        return;
    }
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

void take(node* &root) {
    int d;
    cin >> d;
    while(d != -1) {
        insert(root, d);
        cin >> d;
    } 
}

int main() {
    node* root = NULL;
    cout << "build tree " << endl;
    take(root);
    cout << "inorder" << endl;
    inorder(root);
    delformBST(root, 10);
    cout << "inorder" << endl;
    inorder(root);
    return 0;
}