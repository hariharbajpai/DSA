#include<iostream>
using namespace std;

int power(int a , int pow){
    //base case
    if (pow == 0)
    {
        return 1;
    }
    if (pow == 1)
    {
         return a;
    }
    //recursive call
    int ans = power(a , pow/2);
    if (a%2 == 0)
    {
         return ans*ans;
    }
    else{
        return a*ans*ans;
    }
    
    
}
int main(){

    int a , b;
    cin>>a>>b;

    int ans = power(a , b);
    cout<<"the answer is :"<<ans<<endl;
    return 0;
}