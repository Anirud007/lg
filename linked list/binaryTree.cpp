#include <iostream>
using namespace std;    

class Node {
    public: 
    int data;
    Node* left;
    Node* right;

    // cons
    Node(int data) {
        this -> data = data;
        this -> right = NULL;
        this -> left = NULL;
    }
};

Node* createNode(int d) { 
	Node* temp = new Node(d);
	return temp;
}

void printInorder(Node* node){
	if (node == NULL)
		return;

	printInorder(node -> left);
    cout << node -> data << " ";
	printInorder(node -> right);
}

void printPreorder(Node* node) {
    if (node == NULL) {
        return;
    }
    cout << node -> data << " ";
    printPreorder(node -> left);
    printPreorder(node -> right);
}

void printPostorder(Node* node) {
    if (node == NULL) {
        return;
    }
    printPreorder(node -> left);
    printPreorder(node -> right);
    cout << node -> data << " ";
}

int main()
{
    Node* root = createNode(40);
	root->left = createNode(30);  
    root->right = createNode(50);  
    root->left->left = createNode(25);  
    root->left->right = createNode(35);  
    root->left->left->left = createNode(15);  
    root->left->left->right = createNode(28);  
    root->right->left = createNode(45);  
    root->right->right = createNode(60);  
    root->right->right->left = createNode(55);  
    root->right->right->right = createNode(70);  

	cout << "Inorder traversal of binary tree is " << endl;
	printInorder(root);
    cout << endl;
	cout << "PreOrder traversal of binary tree is " << endl;
	printPreorder(root);
    cout << endl;
	cout << "PostOrder traversal of binary tree is " << endl;
	printPostorder(root);
	return 0;
}
