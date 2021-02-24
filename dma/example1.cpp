#include<iostream>
using namespace std;

int main(){
    int *a, sum = 0;
    a = new int[6];
    for(int i=0;i<6;i++){
        a[i] = i+1;
    }
    for(int i=0; i<6; i++){
        sum+=a[i];
    }
    delete[] a;
    a = NULL;
    for(int i=0; i<6; i++){
        sum+=a[i];
    }
    cout<<sum<<endl;
    return 0;
}