#include<iostream>
using namespace std;
//function 
void menu();
void addFraction();
void subtractFraction();
void multiplyFraction();
void divideFraction();
// do while condition  to allow user to choise if the continue or not and also select the operator.
int main() {
	char x;
	
	do {
	menu();
	
	int choice;
	cin >> choice;
	
	if(choice == 1) {
	 addFraction();
    }
	else if (choice == 2) {
		subtractFraction(); 
	}
	else if (choice == 3) {
		multiplyFraction();
	}
	else {
		divideFraction();
	}	
	cout<<endl;
	cout << "Do you wish to perform another operation ? (y or n): "<< endl;
	cin >> x;
	cout<<endl;
} while (x != 'n');
//output when the user decide to end the program.
 cout<<"You end the programm...."<<endl;
	
return 0;
}
//function menu to display a menu 

void menu() {
	cout << "This program lets the user perform arithmetic operations on fractions.\nChoose the opreation you want to perform (1,2,3 or 4):" << endl;
	cout << "1- Addition" << "\n2- Subtraction" << "\n3- Multiplication" << "\n4- Division" << endl<<endl;
}

//function addition including inpout and output also process
void addFraction( ) {
	int a, b, c, d; 
	int numerator;
	int denominator;
	
	cout << "Enter four integers representing the numerators and denominators of two fractions:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	numerator = (a * d) + (b * c);
	denominator = b *d;

	cout << "After addition, the numerator of the result is: " << numerator << "  ,and the denominator of the result is: " << denominator << "." << endl;
}
//function subtraction including inpout and output also process
void subtractFraction() {
	int a, b, c, d;
	int numerator;
	int denominator;
	
	cout << "Enter four integers representing the numerators and denominators of two fractions:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	numerator = (a * d) - (b * c);
	denominator = b * d;
	
	cout << "After subtraction, the numerator of the result is: " << numerator << " ,and the denominator of the result is: " << denominator << "." << endl;
}
//function multiplication including inpout and output also process
void multiplyFraction() {
	int a, b, c, d;
	int numerator;
	int denominator;
	
	cout << "Enter four integers representing the numerators and denominators of two fractions:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	numerator = a * c;
	denominator = b * d;
	
	cout << "After addition, the numerator of the result is: " << numerator << " ,and the denominator of the result is: " << denominator << "." << endl;
}
//function division including inpout and output also process
void divideFraction() {
	int a, b, c, d;
	int numerator;
	int denominator;
	
	cout << "Enter four integers representing the numerators and denominators of two fractions:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	numerator = a * d;
	denominator = b * c;
	
	cout << "After addition, the numerator of the result is: " << numerator << " ,and the denominator of the result is: " << denominator << "." << endl;
}

