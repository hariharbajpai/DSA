#include<iostream>
using namespace std;

// bool isEven(int a){

//     if (a%2 == 0)
//     {
//         return 1;
//     }
//     else {
//         return 0;
//     }
    
// }
// int main(){

//     int num;
//     cin>>num;

//     if (isEven(num))
//     {
//         cout<<"the number is even";
//     }
//     else{
//         cout<<"number is odd";
//     }
//     return 0;
// }
int factorial(int n){

    int fact = 1;

    for (int i = 1; i <=n; i++)
    {
         fact = fact * i;
    }
    return fact;
}
int nCr(int n , int r){
    
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);

    int ans = num/denom;
    return ans;
}

int main(){

    int n ,r;
    cin>>n>>r;

    cout<<"answer is:"<<nCr(n,r);
}