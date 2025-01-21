// arithmetic operators in C++

#include <iostream>
using namespace std;

int main() {
    
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Perform arithmetic operations
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    cout << "Division: " << num1 / num2 << endl;
    cout << "Modulus (as integers): " << static_cast<int>(num1) % static_cast<int>(num2) << endl;

    return 0;
}

/* output
Enter the first number: 2
Enter the second number: 3
Addition: 5
Subtraction: -1
Multiplication: 6
Division: 0.666667
Modulus (as integers): 2 */