#include<iostream>
using namespace std;

// class Example{
//     public:
//         int a;
//         void add(Example E) {
//             a = a + E.a;
//         }
// };

// int main() {
//     Example E1, E2;
//     E1.a = 5;
//     E2.a = 10;
//     E2.add(E1);
//     cout << E1.a << E2.a << "\n";
//     return 0;
// }

class Example {
    public:
        int a;
        Example add(Example Ea,Example Eb) {
            Example Ec;
            Ec.a = Ec.a + Ea.a + Eb.a;
            return Ec;
        }
};

int main() {
    Example E1, E2, E3;
    E1.a = 5;
    E2.a = 10;
    E3 = E3.add(E1,E2);
    cout << E3.a << "\n";
    return 0;
}