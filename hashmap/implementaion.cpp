#include <iostream>
#include <unordered_map>
#include <string>  // Include this header for using strings

using namespace std;

int main() {
    // Creation of an unordered_map with string keys and int values
    unordered_map<string, int> m;

    // Insertion:

    // 1
    pair<string, int> p = make_pair("harihar", 7);
    m.insert(p);

    // 2
    pair<string, int> pair2("bajpai", 2);
    m.insert(pair2);

    // 3
    m["aakash"] = 69;

    // Searching
    cout << "aakash: " << m["aakash"] << endl;

    // Output the other inserted values
    cout << "harihar: " << m["harihar"] << endl;
    cout << "bajpai: " << m["bajpai"] << endl;

    //size
    cout<<m.size() << endl;

    //to check presence
    cout<<m.count("harihar")<<endl;

    //erase
    m.erase("harihar");
    cout<<m.size()<<endl;

    //printing
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //iterator
    unordered_map<string,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
