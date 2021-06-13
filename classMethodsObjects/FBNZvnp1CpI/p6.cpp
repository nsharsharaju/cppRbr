#include<iostream>
using namespace std;

class Host{
    int a;
    public:
     class Nested{
         Host h; //We can't create Object of the class before
         public://defining it completely
            Nested(){
                h.a = 15;
            }
            int get(){
                return h.a;
            }
     };
};

int main(){
    Host::Nested foo;
    cout<<foo.get();
    return 0;
}