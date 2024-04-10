#include<iostream>
using namespace std;

char getmaxchar(string s){
    int arr[26] = {0};

// create an array of count of number
    for (int  i = 0; i < 26; i++)
    {
         char ch = s[i];
         //LowerCase
         int number = 0;
         if (ch >= 'a' && ch <= 'z')
         {
            number = ch - 'a';
         }
         else{//UpperCase
            number = ch - 'A';
         }
        arr[number]++;
    }
    
// find maximum occcurance char
    int maxi = -1;
    int ans = 0 ;
    for (int i = 0; i <  s.length(); i++)
    {
         if (maxi < arr[i])
         {
             ans = i;
             maxi = arr[i];
         }
         
    }
    char finalans = 'a' + ans;
    return finalans;
    
}
int main(){
    string s;
    cin>>s;
    cout<<getmaxchar(s)<<endl;

    return 0;
}