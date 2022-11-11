#include <iostream>
using namespace std;

class Rectangle {
	protected:
		double a, b, squareRectangle, perimeter;
	public:
		Rectangle(double a=0, double b=0) {
			setA(a);
			setB(b);
		}
		void calcSquare() {
			squareRectangle = a * b;
		}
		void calcPerimeter() {
			perimeter = 2 * (a + b);
		}
		void setA(double a) {
			this->a = a;
		}
		void setB(double b) {
			this->b = b;
		}
		double getA() {
			return a;
		}
		double getB() {
			return b;
		}
		double getSquare() {
			return squareRectangle;
		}
		double getPerimetr() {
			return perimeter;
		}
		void show() {
			cout << "Figure: rectangle" << endl;
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;
			cout << "square: " << squareRectangle << endl;
			cout << "perimeter: " << perimeter<< endl;
		}
};