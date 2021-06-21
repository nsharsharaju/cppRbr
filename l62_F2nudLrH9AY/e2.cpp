#include <iostream>
using namespace std;

int& returnValue(int& x)
{
	return x;
}

// Driver Code
int main()
{
	int a = 20;
	int &b = returnValue(a);
    b = 10;
    cout << b << endl;
    cout << a << endl;
	return 0;
}
