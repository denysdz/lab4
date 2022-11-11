#include <iostream>
#include <fstream>
#include <string>
#include "RecInCircl.cpp"

using namespace std;

void writeToFile(string figure, string parameters);

int main () {
	Rectangle rectangle(10, 5);
	rectangle.calcPerimeter();
	rectangle.calcSquare();
	rectangle.show();

	string par1 = "A: " + to_string(rectangle.getA()) + "\nB: " + to_string(rectangle.getB()) + "\nSquare: " + to_string(rectangle.getSquare()) + "\nPerimeter: " + to_string(rectangle.getPerimetr());

	writeToFile("Rectangle", par1);

	cout << "\n\n----------------------------------\n\n";

	Circle circle(15);
	circle.calcCircuit();
	circle.calcSquare();
	circle.show();

	string par2 = "R: " + to_string(circle.getRadius()) + "\nSquare: " + to_string(circle.getSquareCircle()) + "\nCircuit: " + to_string(circle.getCircuit());

	writeToFile("Circle", par2);

	cout << "\n\n----------------------------------\n\n";

	RecInCirc rec(5, 10);
	rec.calc();
	rec.getAll();

	string par3 = "A: " + to_string(rec.getA()) + "\nB: " + to_string(rec.getB()) + "\nSquare: " + to_string(rec.getSquare()) + "\nPerimeter: " + to_string(rec.getPerimetr());
	string par4 = "R: " + to_string(rec.getRadius()) + "\nSquare: " + to_string(rec.getSquareCircle()) + "\nCircuit: " + to_string(rec.getCircuit());

	writeToFile("Rectangle", par3);
	writeToFile("Circle", par4);

	return 0;
}

void writeToFile(string figure, string parameters) {
	ofstream outfile;
	outfile.open("C:/classesFile.txt", std::ios::app);
	if (outfile.is_open()) {
		figure.append("\n");
		parameters.append("\n");
		const char* fig = figure.c_str();
		const char* par = parameters.c_str();
		outfile << figure << parameters << "\n";
		outfile.close();
	}
}