#include "Circle.cpp";
#include "Rectangle.cpp";
#include <iostream>

using namespace std;

class RecInCirc:public Rectangle, public Circle {

	public:
		RecInCirc(double a, double b) : Rectangle(a, b), Circle() {
			r = pow(pow(a,2)+pow(b,2), 1 / 2)/2;
		}
		void calc() {
			Rectangle::calcSquare();
			Rectangle::calcPerimeter();
			Circle::calcSquare();
			Circle::calcCircuit();
		}
		void getAll() {
			Rectangle::show();
			Circle::show();
		}
};