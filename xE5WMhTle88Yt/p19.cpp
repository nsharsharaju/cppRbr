#include<iostream>
using namespace std;
int main() {
    static int x = 1;
    x++;
    if(x<11) {
        main();
    }
    cout << x << " ";
    return 0;
}