#include<iostream>
using namespace std;

void reachHome(int dest , int src){
    
    cout<<" source "<<src<<" destination "<<dest <<endl;
    // base case
    if (src == dest)
    {
        cout<<"phuch gaye "<<endl;
        return ;
    }
    // processing
    src++;
    // recursive case
    reachHome(dest , src);
    
}
int main(){

    int dest = 10;
    int src = 1;

    reachHome(dest , src);
    return 0;
}