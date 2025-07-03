#include <iostream>
using namespace std;

int main() {
    int num1, num2, choice;


    cout << "Enter first number:  ";
    cin  >> num1;

    cout << "Enter second number: ";
    cin  >> num2;

    cout << "\nChoose an operation:\n";
       cout  << "  1. Addition (+)\n";
        cout << "  2. Subtraction (-)\n";
         cout<< "  3. Multiplication (*)\n";
        cout << "  4. Division (/)\n";
        cout << "Enter choice (1-4): ";
    cin  >> choice;

    
    switch (choice) {
        case 1: cout << num1 + num2; 
        break;
        case 2: cout << num1 - num2;
         break;
        case 3: cout << num1 * num2; 
        break;
        case 4:
            if (num2 != 0)
                cout << num1 / num2;        
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Invalid choice.";
    }

 
    return 0;
}

