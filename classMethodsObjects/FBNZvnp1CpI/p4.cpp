#include<iostream>
using namespace std;

class Host{
    public:
        class Nested{
            public:
                void print(){ //class HOST doesn't have any right on this. 
                    cout << "Hellow world"<<endl;
                }
        };
};

int main(){
    Host bar;
    bar.print(); //Host class doesn't have member function print
    return 0;
}