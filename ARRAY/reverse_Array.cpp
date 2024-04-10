#include<iostream>
using namespace std;


void reverse(int arr[], int n ){

    int start = 0;
    int end = n-1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}
void printarry(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
         cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr[5] = {12,22,33,34,4};
    int arr2[6] = {12,22,33,34,4,73};

    reverse(arr , 5);
    reverse(arr2 , 6);

    printarry(arr , 5);
    printarry(arr2 , 6);
    return 0;
}