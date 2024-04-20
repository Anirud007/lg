#include <iostream>
#include <queue>

using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this -> data = d;
        this -> right = NULL;
        this -> left = NULL;
    }
};

node* buildtree(node* root) {
    cout << "enter Data " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1) {
        return NULL;
    }

    cout << "data at left of " << data  << endl;
    root -> left = buildtree(root -> left);
    cout << "data at right of " << data  << endl;
    root -> right = buildtree(root -> right);

}

void levelOrder(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        node* temp = q.front();
        q.pop();
        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout << temp -> data << " ";
            if (temp -> left) {
                q.push(temp -> left);
            }
            if (temp -> right) {
                q.push(temp -> right);
             }
        }
    }    
}

int getlevel(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        // if () {

        // } 
    }
}

void inorder(node* root, int count)  {
     // base case
    if (root == NULL) {
        return;
    }
    inorder(root -> left, count);
    if (root -> left == NULL && root -> right == NULL)
    {
        count++;
    }
    inorder(root -> right, count);

}

int countleafnode(node* root) {
    int count = 0;
    inorder(root, count);
    return count;

}
int main() {
    node* root = NULL;
    root = buildtree(root);
    // levelOrder(root);
    cout << countleafnode(root);
    return 0;
}
