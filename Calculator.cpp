#include "Calculator.h"

int main() {
	cout << "Pick one of the following:\n";
	cout << "1 - Addition\n";
	cout << "2 - Subtraction\n";
	cout << "3 - Multiplication\n";
	cout << "4 - Division\n";
	cout << "5 - Modulo\n";
	cout << "6 - Index.\n";

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
		case 5:
			cout << "You picked modulo.\n";
			modulo();
			break;
		case 6:
			cout << "You picked index.\n";
			index();
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
void getOperands() {
	cout << "Enter number: ";
	cin >> operandA;
	cout << "Enter number: ";
	cin >> operandB;
}
void addition() {
	getOperands();
	cout << operandA << " + " << operandB << " = " << operandA + operandB << endl;
}
void subtraction() {
	getOperands();
	cout << operandA << " - " << operandB << " = " << operandA - operandB << endl;
}
void multiplication() {
	getOperands();
	cout << operandA << " * " << operandB << " = " << operandA * operandB << endl;
}
void division() {
	getOperands();
	cout << operandA << " / " << operandB << " = " << operandA / operandB << endl;
}
void modulo() {
	getOperands();
	resultant = fmod(operandA,operandB);
	cout << operandA << " % " << operandB << " = " << resultant << endl;
}
void index() {
	getOperands();
	resultant = pow(operandA,operandB);
	cout << operandA << " ^ " << operandB << " = " << resultant << endl;
}
