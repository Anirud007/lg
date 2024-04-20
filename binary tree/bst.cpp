#include <iostream>
#include <queue>
using namespace std;

class tree {
    public:
    int data;
    tree* right;
    tree* left;

    tree (int data) {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    } 
};

tree* del_noleaf(tree* &root) {

}
bool search(tree* &root, int x) {
    if (root == NULL) {
        return false;
    }
    if (root -> data == x) {
        return true;
    }
    if (root -> data > x) {
        search(root -> left, x);
    }
    else {     
        search(root -> right, x);
    }
}

tree* insert(tree* &root, int key) {
    if (root == NULL) {
        root = new tree(key);
        return root;
    }
    if (key > root -> data) {
        root -> right = insert(root -> right, key);
    }
    else {
        root -> left = insert(root -> left, key);
    }
    return root;
}

void take(tree* &root) {
    int data;
    cin >> data;

    while(data != -1) {
        insert(root, data);
        cin >> data;
    }
}

int find_max(tree* &root) { 
    tree* temp = root;
    while (temp -> right != NULL) {
        temp = temp -> right;
    }
    return temp -> data;
} 
int find_min(tree* &root){
    tree* temp = root;
    while (temp -> left != NULL) {
        temp =  temp -> left;
    }
    return temp -> data;
}
void levelOrder(tree* root) {
    queue<tree*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        tree* temp = q.front();
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

void inorder(tree* &root) {
    if (root == NULL) {
        return;
    }
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

int main() {
    tree* root = NULL;
    take(root);
    levelOrder(root);
    bool l = search(root, 90);
    cout << l << endl;
    cout << find_min(root) << endl;
    cout << find_max(root) << endl;
    return 0;
}
// find inorder pred 
// find inorder sucs