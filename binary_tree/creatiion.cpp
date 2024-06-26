#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node* createTree() {
    int data;
    cout << "Enter the data (enter -1 to terminate): ";
    cin >> data;

    if (data == -1) {
        return nullptr;
    }

    Node* root = new Node(data);

    cout << "Enter data for inserting in left: "<<data <<endl;
    root->left = createTree();

    cout << "Enter data for inserting in right: "<<data <<endl;
    root->right = createTree();

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

void inorder(Node* root){
    //base case
     
}
void preorder(Node* root){
    if (root == NULL) return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void postorder(Node* root){
    if (root == NULL) return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(Node* &root) {
    queue<Node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new Node(data);
    
    q.push(root);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new Node(rightData);
            q.push(temp->right);
        }
    }
 }

int main() {
    Node* root = nullptr;

    cout << "Creating the tree...\n";
    root = createTree();

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Level order traversal...\n";
    levelodertraversal(root);
    cout<<endl;

    cout<<"inorder traversal is: ";
    inorder(root);
    cout<<endl;

    cout<<"preorder traversal is: ";
    preorder(root);
    cout<<endl;

    cout<<"postorder traversal is: ";
    postorder(root);
    cout<<endl;


    return 0;

}
