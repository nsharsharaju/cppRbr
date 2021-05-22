#include <iostream>
using namespace std;
int main() {
    int a = 32, *ptr = &a;
    char ch = 'A', &cho = ch;
    cho += 1;
    *ptr += ch;
    cout << a << " , " << ch << endl;
    return 0;
}

//&cho = ch This just creating another name of ch