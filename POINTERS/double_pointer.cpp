#include<iostream>
using namespace std;

int main(){

    int i = 5;
    int* ptr = &i;
    int** ptr2 = &ptr;

    cout << "printing ptr "<< ptr <<endl;
    cout << "address of ptr "<< &ptr <<endl;
    cout<<*ptr2<<endl;

    //printing i 
    cout<< i <<endl;
    cout<< *ptr <<endl;
    cout<< **ptr2 <<endl;

    //printing ptr
    cout<< &i<<endl;
    cout<< ptr  <<endl;
    cout<< *ptr2 <<endl;

    //printing ptr2

    cout<< &ptr <<endl;
    cout<< ptr2 <<endl;


    return 0;
}