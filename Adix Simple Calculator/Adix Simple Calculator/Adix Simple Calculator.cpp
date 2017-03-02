// Adix Simple Calculator.cpp : Defines the entry point for the console application.
//Purpose: The user chooses an option from the menu, then hes either adding, subtracting, multiplying, dividing or gets modulo.
//Date Written 02/03/2017

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
		int choice;
		int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, result, result1, result2, result3;
		float result4;
		bool calcOn = true;
		while (calcOn != false) {
			cout << "******************************* \n";
			cout << "Welcome to Adix Calculator! \n";
			cout << "1. Addition. \n";
			cout << "2. Subtraction. \n";
			cout << "3. Multiplication. \n";
			cout << "4. Division. \n";
			cout << "5. Modulus. \n";
			cout << "6. Exit the program. \n" << "\n";

			cout << "Choose one option: ";
			cin >> choice;
			cout << "\n";

			switch (choice)
			{
			case 1:
				cout << "You chose Addition!\n" << "\n";
				cout << "Please enter the FIRST number to add: ";
				cin >> num1;
				cout << "Please enter the SECOND number to add: ";
				cin >> num2;
				result = num1 + num2;
				cout << "\n";
				cout << "The Result is: " << result << "\n";
				cout << "\n" << "\n" << "\n" << "\n";
				break;
			case 2:
				cout << "You chose Subtraction!\n" << "\n";
				cout << "Please enter the FIRST number to subtract: ";
				cin >> num3;
				cout << "Please enter the SECOND number to subtract: ";
				cin >> num4;
				result1 = num3 + num4;
				cout << "\n";
				cout << "The Result is: " << result1 << "\n";
				cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n";
				break;
			case 3:
				cout << "You chose Multiplication!\n" << "\n";
				cout << "Please enter the FIRST number to multiply: ";
				cin >> num5;
				cout << "Please enter the SECOND number to multiply: ";
				cin >> num6;
				result2 = num5 * num6;
				cout << "\n";
				cout << "The Result is: " << result2 << "\n";
				cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n";
				break;
			case 4:
				cout << "You chose Division!\n" << "\n";
				cout << "Please enter the FIRST number to divide: ";
				cin >> num7;
				cout << "Please enter the SECOND number to divide: ";
				cin >> num8;
				result3 = num7 / num8;
				cout << "\n";
				cout << "The Result is: " << result3 << "\n";
				cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n";
				break;
			case 5:
				cout << "You chose Modulus!\n" << "\n";
				cout << "Please enter the FIRST number to module: ";
				cin >> num9;
				cout << "Please enter the SECOND number to module: ";
				cin >> num10;
				result4 = num9 % num10;
				cout << "\n";
				cout << "The Result is: " << result4 << "\n";
				cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n";
				break;
			case 6:
				return 0;
				break;
			default:
				cout << "Not a Valid Choice. \n";
				cout << "Choose again.\n";
				cin >> choice;
				break;
			}
		}


	return 0;
}
