#include <iostream>
using namespace std;
//Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "" << endl;
	cout << "Your Selection:";
}
void factorial() {
	//I recommend writing your factorial code here
	cout << "" << endl;
	cout << "Factorial:" << endl;
	int A;
	long factorial = 1.0;
	cout << "Enter a number: ";
	cin >> A;

	if (A < 0) {
		cout << "Please select a positive number.";
	}
	else {
		cout << A << "! = ";
		for (int i = 1; i <= A; ++i) {
			factorial *= i;
			if (i < A) {
				cout << i << " * ";
			}
			else {
				cout << i;
			}
		}
		cout << " = " << factorial << endl;
	}
}
void arithmetic() {
	//I recommend writing your arithmetic code here
	cout << "" << endl;
	cout << "Arithmetic Series:" << endl;
	int A;
	int B;
	int C;
	long arithmetic = 1.0;
	cout << "Enter a number to start at: ";
	cin >> A;
	cout << "Enter a number to add each time: ";
	cin >> B;
	cout << "Enter the number of elements in the series: ";
	cin >> C;
	C = A + B;

	if (C < 0) {
		cout << "Please enter a positive number." << endl;
	}
	else {
		for (int i = 1; i <= ((C-1)*B+A); i += B) {
			arithmetic += i;
			if (i < C) {
				cout << i << " + ";
			}
			else {
				cout << i;
			}
		}
		cout << " = " << arithmetic << endl;
	}
}
void geometric() {
	//I recommend writing your geometric series code here

}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		//Quit if user chooses to exit (or invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N]";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}