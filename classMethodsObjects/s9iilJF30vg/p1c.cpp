#include<iostream>
using namespace std;
class A{
    public:
        int a;
        A(int a) {
            this->a = a;
        }
};

int main() {
    A a(10);
    cout<<a.a<<endl;
    return 0;
}