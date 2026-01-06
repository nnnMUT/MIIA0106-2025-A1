#include <iostream>
#include <iomanip>
using namespace std;

double circleArea(double radius)
{
	return 3.1416 * radius * radius;
}
double rectangleArea(double length, double width)
{
	return length * width;
}

int main()
{
	double r, l, w;
	cout << "Enter radius: ";
	cin >> r;

	cout << "Enter width: ";
	cin >> w;

	cout << "Enter length: ";
	cin >> l;

	cout << fixed << setprecision(2);
	cout << "Circle Area: " << circleArea(r) << endl;
	cout << "Rectangle Area: " << rectangleArea(l, w) << endl;

	return 0;
}