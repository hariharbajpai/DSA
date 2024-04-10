#include<iostream>
using namespace std;

void update1(int n){
    n++;
}
void update2(int& n){
    n++;
}
     

int main(){
    int i = 5;

    //create a ref variable

    // int& j = i;

    // cout << i<<endl;
    // i++;
    // cout << i <<endl;
    // j++;
    // cout << i <<endl;

    int n = 5;
    cout<<"before1 "<<n<<endl;
    update1(n);
    cout<<"after1 "<< n <<endl;
   
    cout<<"before2 "<<n<<endl;
    update2(n);
    cout<<"after2 "<< n <<endl;
    return 0;
}