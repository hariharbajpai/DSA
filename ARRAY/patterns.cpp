#include <iostream>
using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int i = 1;
//     while (i<=n)
//     {
//         int j = 1;
//         while (j<=n)
//         {
//            cout<<n-j+1;
//            j += 1;
//         }
//         cout<<endl;
//         i += 1;
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     int  i = 1;
//     int count = 1;

//     while (i<=n)
//     {
//        int j = 1;
//        while (j<=n)
//        {
//         cout<<count<<" ";
//         count += 1;
//         j += 1;
//        }
//        cout<<endl;
//        i += 1;
//     }

// }

// int main()
// {

//     int n;
//     cin >> n;

//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             cout << "*";
//             col += 1;
//         }
//         cout << endl;
//         row += 1;
//     }
// }

// int main(){

//     int n;
//     cin>>n;

//     int i = 1;
//     while (i<=n)
//     {
//        int j = 1;
//        while (j<=n)
//        {
//         char ch = 'A' + i - 1;
//         cout<<ch;
//         j = j+1;
//        }
//        cout<<endl;
//        i += 1;

//     }
    
// }


int main(){

    int n;
    cin>>n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = ('A' + i - 1);
            cout<<ch;
            j += 1;
        }
        cout<<endl;
        i += 1;
    }
    
}