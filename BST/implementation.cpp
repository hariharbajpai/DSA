#include <iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

Node* insertIntoBST(Node* &root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }
    if (data > root->data) {
        root->right = insertIntoBST(root->right, data);
    } else {
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}
void levelodertraversal(Node* root){
    queue<Node*> q;
    q.push(root);   

    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->data <<" ";
        q.pop();

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

Node* mimValue(Node* root){
    Node* temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
Node* maxValue(Node* root){
    Node* temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node* deleteNode(Node* &root, int val) {
    //base case
    if(root==NULL) return root;

    if(root->data == val) {
        //=============0 child=============
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        //=============1 child==============
        
        //left child
        if(root->left != NULL && root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        //=============2 child==============
        if(root->left != NULL && root->right != NULL){
            Node* temp = mimValue(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
            return root;
        }
    }
    else if(root->data > val){
        root->left = deleteNode(root->left, val);
        return root;
    }
    else{
        root->right = deleteNode(root->right, val);
        return root;
    }
}
void takeInput(Node* &root) {
    int data;
    cout << "Enter the data you want to insert (enter 0 to stop):" << endl;
    cin >> data;
    while (data != -1) {
        insertIntoBST(root, data);
        cin >> data;
    }
}


int main() {
    Node* root = NULL;
    takeInput(root);
    
    cout << "printing BST:" << endl;
    levelodertraversal(root);
    return 0;
}

