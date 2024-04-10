#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    // create a queue
    queue<int> q;
    
    // insert elements in the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.push(110);
    q.push(120);
    q.push(130);
    q.push(140);
    q.push(150);
    q.push(160);
    q.push(170);
    q.push(180);
    q.push(190);
    q.push(200);
    q.push(210);
    cout<<"size of queue "<<q.size()<<endl;
    q.pop();
    cout<<"================================================================"<<endl;
    cout<<"size of queue "<<q.size()<<endl;
    q.pop();
    cout<<"================================================================"<<endl;
    cout<<"size of queue "<<q.size()<<endl;
    q.pop();
    cout<<"================================================================"<<endl;
    cout<<"size of queue "<<q.size()<<endl;
    q.pop();
    cout<<"================================================================"<<endl;

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    cout<<"================================================================"<<endl;
    
    cout<<"front of queue is "<<q.front()<<endl;
    cout<<"================================================================"<<endl;
    return 0;
}