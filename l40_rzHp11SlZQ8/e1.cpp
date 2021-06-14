#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<int> a; //empty vector with size and capacity = 0
//     a[0] = 2; //So we can't access 0th element
//     cout<< a[0] << endl;
//     return 0;
// }

int main(){
    vector<int> a;
    a.push_back(2);
    vector<int> b(a); //Copy Constructor
    b[0] = 6;
    //vector<char> c(a); compiler error
    vector<char> c(5,66); //5 capital 'B'
    vector<int> d(a.begin(),a.end()); // d = {2}
    d.push_back(5); // d = {2,5}

    cout << (a==b) << endl;

    cout << (a<d) << endl;

    vector<int> v(10);
    for(int i=0; i<10; i++){
        v[i] = i+1;
    }
    cout<<v.at(6)<<endl;
    cout<<v.back()<<endl;
    // v = {1,2,3,...,10}
    vector<int> v1(v);
    v.clear();
    cout << "v.size() = " << v.size()<<endl;
    cout << "v.capacity() = " << v.capacity()<<endl;
    cout << v[1] << endl;
    //cout<<v.end() //We can't print iterators

    cout << v.empty() << endl;

    
    // iterators
    v = v1;
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";

    /*vector<int>::iterator it = v.begin();
    for(;it!=v.end();it++)
        cout << (*it) << " ";*/

    vector<int>::iterator it = v.end();
    for(;it!=v.begin();it++)
        cout << (*it) << " ";
    
    return 0;
}
