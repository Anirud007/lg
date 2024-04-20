#include<bits/stdc++.h>
using namespace std;
 
// An AVL tree node
class Node
{
    public:
    int key;
    int height;
    Node *left;
    Node *right;

    Node(int key) {
        this -> key = key;
        this -> right = NULL;
        this -> left = NULL; 
        this -> height = 1;
    }
};

int height (Node* root) {
    if (root == 0) 
        return 0;
    return root -> height;
}
Node* Rrotation(Node* node) {

}

Node* Lrotation(Node* node) {
    
}

int main() {
    return 0;
}