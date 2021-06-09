#include<iostream>
using namespace std;

class A{
    public:
        int add(int x, int y){
            return x+y;
        }
        int add(int x, int y, int z){
            return x+y+z;
        }
        int add(int *arr, int n){
            int sum = 0;
            for(int i=0;i<n;i++){
                sum += arr[i];
            }
            return sum;
        }
};

int main(){
    int a=3, b=9, c=1;
    int arr[] = {1,2,3,4};
    A obj;
    cout<<obj.add(a,b)<<endl;
    cout<<obj.add(a,b,c)<<endl;
    cout<<obj.add(arr, 4)<<endl;
    return 0;
}