#include<iostream>
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

int main() {
    Node* root = nullptr;

    cout << "Creating the tree...\n";
    root = createTree();

    return 0;
}
