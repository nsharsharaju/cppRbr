#include<iostream>
using namespace std;

int main () {
    int arr[] = {11,21,31,41,51,71,91};
    int *ptr1 = arr;
    int *ptr2 = arr+6;
    cout<<(ptr2 - ptr1)<<endl;
    return 0;
}