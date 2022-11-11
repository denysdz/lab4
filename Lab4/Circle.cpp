#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

using namespace std;

class Circle {
	protected:
		double r, squareCircle, circuit;
	public:
		Circle (double r=0) {
			setRadius(r);
		}
		void calcSquare() {
			squareCircle = M_PI * pow(r, 2);
		}
		void calcCircuit() {
			circuit = 2 * M_PI * r;
		}
		void setRadius(double r) {
			this->r = r;
		}
		void show() {
			cout << "Figure: circle" << endl;
			cout << "radius: " << r << endl;
			cout << "square: " << squareCircle << endl;
			cout << "circuit: " << circuit << endl;
		}
		double getRadius() {
			return r;
		}
		double getSquareCircle() {
			return squareCircle;
		}
		double getCircuit() {
			return circuit;
		}

};