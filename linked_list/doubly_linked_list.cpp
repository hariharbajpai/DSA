#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
    node *prev;

    // constructor
    node(int d) {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~node(){
        int val = this -> data;
        if (next != NULL)
        {
            delete next;
            next =NULL;
        }
        cout<<"memory free for node wuith data "<<val<<endl;
    }
};

// traversing doubly linked list
void print(node *&head) {
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// get length of linked list
int getlength(node *&head) {
    node *temp = head;
    int length = 0;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtHead(node *&head, node* &tail, int d) {
    // empty list
    if (head == NULL) {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    } else {
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(node *&head, node* &tail, int d) {
    if (tail == NULL) {
        node *temp = new node(d);
        tail = temp;
        head = temp;
    } else {
        node *temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(node *&head, node *&tail, int position, int d) {
    // insert at start
    if (position == 1) {
        insertAtHead(head, tail, d);
        return;
    }
    node *temp = head;
    int cnt = 1;

    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }
    if (temp == NULL) {
        cout << "Invalid position" << endl;
        return;
    }
    // insert at last position
    if (temp->next == NULL) {
        insertAtTail(head, tail, d);
        return;
    }
    // creating a node for d
    node *nodeToInsert = new node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, node* & head) { 

    //deleting first or start node
    if(position == 1) {
        node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next =NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr -> prev  = NULL;
        prev -> next = prev -> next;
        curr -> next =  NULL;

        
        delete curr;

    }
}

int main() {
    node *nd1 = new node(10);
    node *head = nd1;
    node *tail = nd1;

    print(head);
    cout << "Length: " << getlength(head) << endl;
   
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
   
    insertAtHead(head, tail, 12);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
   
    insertAtTail(head, tail, 22);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl; 
   
    insertAtPosition(head, tail, 2, 221);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    
    insertAtPosition(head, tail, 3, 87);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
   
    insertAtPosition(head, tail, 4 , 69);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    
    insertAtPosition(head, tail, 5, 88);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;

    deleteNode(1 , head);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    return 0;
}