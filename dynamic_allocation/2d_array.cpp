#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;

    int col;
    cin>>col;

    int** arr = new int*[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    // creation done

    //taking input 
    for (int i = 0; i < row; i++)
    {
         for (int j = 0; j < col; j++)
         {
             cin>>arr[i][j];
         }
         
    }

    // output
    for (int i = 0; i < row; i++)
    {
         for (int j = 0; j < col; j++)
         {
             cout<<arr[i][j]<<" ";
         }cout<<endl;
         
    }
    
    // we have to free memory because we use heap in the above code 

    // releasing memory
    for (int i = 0; i < row; i++)
    {
       delete [] arr[i];  
    }
    
        delete []arr;


    return 0;
}