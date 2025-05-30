#include "Point.h"

int main() {
	Point2D point1;

	cout << "Input x, y: ";
	cin >> point1.x >> point1.y;

	cout << "Point is " << point1.getQuatre() << "\n";

    return 0;
}