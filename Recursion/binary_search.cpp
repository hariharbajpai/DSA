#include<iostream>
using namespace std;

bool binarySearch(int *arr , int s , int e , int k){
    //base case
    if (s>e)
    {
        return false;
    }
    int mid = s + (e-s)/2;

    if (arr[mid] == k)
    {
         return true;
    }
    
    if (arr[mid] < k)
    {
       return binarySearch(arr , mid+1 , e,k);
    }
    else{
        return binarySearch(arr , s , mid-1 , k);
    }
    
}
int main(){
    int arr[6] = {3, 2, 5, 6, 1, 10};
    int size = 6;
    int key = 5;

    int ans = binarySearch(arr,0 , 5 ,key);

    if (ans) {
        cout << "present" << endl;
    } else {
        cout << "not present" << endl;
    }
    
    
    return 0;
}