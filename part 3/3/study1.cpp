#include <iostream>
#include <cstring>
using namespace std;

class Circle {
public:
	int innerRadius;
	int outerRadius;
	double getArea();
};
double Circle::getArea() {
	return 3.14 * (outerRadius * outerRadius - innerRadius * innerRadius);
}
int main() {
	int a;
	int b;
	cout << "outerRadius ? >> ";
	cin >> a;
	cout << "innerRadius ? >> ";
	cin >> b;
	Circle donut;
	donut.outerRadius = a;
	donut.innerRadius = b;
	double area = donut.getArea();
	cout << "donut ¸éÀûÀº " << area;
	return 0;
}