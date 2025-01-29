#include <iostream>

using namespace std;

void equation(double a, double b)
{
	double x = -b/a ;
	cout << "x = " << x << endl;
}

int main ()
{
	double a, b;
	cout << "Enter coefficient a: ";
	cin >> a;
	cout << "Enter coefficient b: ";
	cin >> b;

	equation(a, b);
	return EXIT_SUCCESS;
}
