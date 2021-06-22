#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the height of Reverse Trianle: ";
    cin>>n;
    cout<<endl;
    for(int i = n;i>=1;i--) {
        for(int j = i;j>=1;j--) {
            cout<<"! ";
        }
        cout<<endl;
    }
    return 0;
}