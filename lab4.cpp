// C++ Program to demonstrate a
// Catching Base Exception
#include <iostream>
using namespace std;

class Base {
};
class Derived : public Base {
};
int main()
{
	Derived d;
	// Some other functionalities
	try {
		// Monitored code
		throw d;
	}
	catch (Derived d) {
		// This 'catch' block is NEVER executed
		cout << "Caught Derived Exception";
	}
	catch (Base b) {
		cout << "Caught Base Exception";
	}
	getchar();
	return 0;
}
