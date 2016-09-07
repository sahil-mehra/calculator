#include <iostream>
using namespace std;

void choice();
void choice1();
void addition();
void subtraction();
void multiplication();
void division();
void input();
bool a = true;
double x;
double y;
double z;

int main() {
	cout << "Pick one of the following:\n";
	cout << "1 - Addition\n";
	cout << "2 - Subtraction\n";
	cout << "3 - Multiplication\n";
	cout << "4 - Division\n";

	choice();

	return 0;
}
void choice() {
	int choice;
	cout << "Choice: " ;
	cin >> choice;

	switch(choice) {
		case 1:
			cout << "You picked addition.\n";
			addition();
			break;
		case 2:
			cout << "You picked subtraction.\n";
			subtraction();
			break;
		case 3:
			cout << "You picked multiplication.\n";
			multiplication();
			break;
		case 4:
			cout << "You picked division.\n";
			division();
			break;
		default:
			cout << "You made an illegal choice.\n";
			cout << "Please enter available choice.\n";
			choice1();
	}
}
void choice1(){
	choice();
}
void input() {
	cout << "Enter number: ";
	cin >> x;
	cout << "Enter number: ";
	cin >> y;
}
void addition() {
	input();
	z = x + y;
	cout << x << " + " << y << " = " << z << endl;
}
void subtraction() {
	input();
	z = x - y;
	cout << x << " - " << y << " = " << z << endl;
}
void multiplication() {
	input();
	z = x * y;
	cout << x << " * " << y << " = " << z << endl;
}
void division() {
	input();
	z = x / y;
	cout << x << " / " << y << " = " << z << endl;
}
