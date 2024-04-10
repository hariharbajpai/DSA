#include<iostream>
using namespace std;

bool ispresent(int arr[][4] ,  int target , int row ,int col)//number of coloumn is compulsary to give
{
       for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            if (arr[row][col] == target)
            {
                return 1;
            }
            
        }
    }  
    return 0;
}
int main(){
     // create 2d array 
    int arr[3][4];

    // taking input
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cin >> arr[row][col];
        }
    }

    // print
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout<<"Enter the element want to search"<<endl;
    int target;
    cin>>target;

    if (ispresent(arr,target,3,4))
    {
         cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    
    return 0;
}