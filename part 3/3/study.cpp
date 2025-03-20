#include <iostream>
#include <cstring>
using namespace std;

class Circle {
public:
	int radius;
	int innerRadius;
	int outerRadius;
	double getArea();
	double incgetArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

double Circle::incgetArea() {
	return 3.14 * (outerRadius * outerRadius - innerRadius * innerRadius);
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

	Circle donut2;
	donut2.outerRadius = 3;
	donut2.innerRadius = 1;
	area = donut2.incgetArea();
	cout << "donut2 면적은 " << area;

	return 0;
}