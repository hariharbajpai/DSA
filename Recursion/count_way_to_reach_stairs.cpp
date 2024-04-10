#include<iostream>
using namespace std;
int count_stairs(int n){
    //base class 
    if(n==0)
    return 1;
    if(n<0)
    return 0;

   //recursive class
   return count_stairs(n-1) + count_stairs(n-2);
}
int main(){
    
    int n;
    cin>>n;

    cout<<  count_stairs(n);
    return 0;
}