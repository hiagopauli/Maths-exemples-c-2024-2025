#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter with lenghts of three segments: ";
	cin >> a >> b >> c;
	
	if (a <=0 || b <= 0 || c <= 0)
	{
		cout << "cant form triangle." << endl;
		return EXIT_SUCCESS;
	}

	double max_side = max(a, max(b, c));
	double sum_rest = a + b + c - max_side;

	if (sum_rest > max_side) 
	{
		double perimeter = a + b + c;
		double s = perimeter / 2.0; 
		double area = sqrt(s * (s - a ) * (s - b) * (s - c));

		cout << "the segments can form triangle." << endl;
		cout << "Perimeter: "        << perimeter << endl;
		cout << "Area: "                  << area << endl;
	}
	else 
	{
		cout << "the segments cant form triangle." << endl;
	}

return EXIT_SUCCESS;
}
