#include<iostream>
using namespace std;

// int main(){
    
//     int n;
//     cin>>n;


//     int i = 2;
//     int sum = 0;

//     while (i<=n)
//     {
//        sum += i;
//        i = i+1;
//     }
//     cout<<sum;
//     return 0;
// }


//***
//***
//*** patterns
// int main(){
    
//     int n;
//     cin>>n;

//     int i = 1;
//     while (i<n)
//     {
//         int j = 1;
//          while (j<n)
//          {
//             cout<<"*";
//             j += 1;
//          }
//          cout<<endl;
//          i += 1;
//     }
    
// }

//111
//222
//333 patterns

int main(){
    
    int n;
    cin>>n;

    int i = 1;
    while (i<n)
    {
        int j = 1;
         while (j<n)
         {
            cout<<i;
            j += 1;
         }
         cout<<endl;
         i += 1;
    }
    
}