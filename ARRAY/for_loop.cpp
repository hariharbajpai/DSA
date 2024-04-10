#include<iostream>
using namespace std;

// int main(){

//     int n ;
//     cin>>n;

//     int sum = 0;
//     for (int  i = 1; i <= n ; i++)
//     {
//         sum += i;
//     }
//     cout<<sum<<endl;
    
// }

//FIBONACCI SERIES

int main(){

    int n ;
    cin>>n ;

    int a = 0;
    int b = 1;
    cout<<a<<" "<<b;
    for (int i = 1; i <= n ; i++)
    {
        int NextNumber = a+b;
        cout<<" "<<NextNumber;

        a = b;
        b = NextNumber;

    }
    


}