/*
A C++ program to serve the functions of simple arithmetic operations : Addition, Subtraction, Multplication, Division.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int choice;
	cout << "Choose any one of the options below : \n[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\n\nEnter your choice : ";
	cin >> choice;

	float number1, number2;
	cout << "Enter the first number : ";
	cin >> number1;
	cout << "Enter the second number : ";
	cin >> number2;

	if (choice == 1) {
		cout << "The result of the addition is : " << number1 + number2 << endl;
	} else if (choice == 2) {
		cout << "The result of the subtraction is : " << number1 - number2 << endl;
	} else if (choice == 3) {
		cout << "The result of the multiplication is : " << number1 * number2 << endl;
	} else if (choice == 4) {
		cout << "The result of the division is : " << number1 / number2 << endl;
	} else {
		cout << "[ Error : No such options available ]" << endl;
	}
	return 0;
}
