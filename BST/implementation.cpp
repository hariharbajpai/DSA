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

