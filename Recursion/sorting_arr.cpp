#include<iostream>
using namespace std;

bool isSorted(int arr[] , int size){

    //base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
         return false;
    }
    else{
        bool remainingpart = isSorted(arr+1 , size-1);
    }
    
}
int main(){

    int arr[5] = {1,2,34,43,53};
    int size  = 5;

    bool ans = isSorted(arr , size);
    cout<<ans<<endl;
    return 0;
}