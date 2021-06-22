#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Height of Triangle: ";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}