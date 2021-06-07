#include<iostream>
using namespace std;

// class A{
//     public:
//     A(int x){
//         cout<<"A"<<x<<endl;
//     }
// };

// class B: public A{
//     public:
//         B(int x){
//             cout<<"B"<<x<<endl;
//         }
// };

// // A derived class can only call the constructor is immediate base class
// // C can call only B's constructor
// class C: public B{
//     public:
//         C(int x, int y, int z): A(y), B(z){
//             cout<<"C"<<x<<endl;
//         }
// };

// int main(){
//     C onj(2, 5, 6);
//     return 0;
// }

class A{
    public:
    A(int x){
        cout<<"A"<<x<<endl;
    }
};

class B: public A{
    public:
        B(int x, int y): A(y){
            cout<<"B"<<x<<endl;
        }
};

// A derived class can only call the constructor is immediate base class
// C can call only B's constructor
class C: public B{
    public:
        C(int x, int y, int z): B(y, z){
            cout<<"C"<<x<<endl;
        }
};

int main(){
    C obj(2, 5, 9);
    return 0;
}