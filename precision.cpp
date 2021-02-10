#include<iostream>
#include<iomanip>

using namespace std;

int main () {
    double pi = 3.141592;
    cout << pi << endl;
    cout << setprecision(4) << pi << '\n';
    cout << setprecision(10) << pi << '\n';
    cout << fixed;
    cout << setprecision(4) << pi << '\n';
    cout << setprecision(10) << pi << '\n';
    return 0;
}