#include <iostream>
#include <cmath>
using namespace std;

class Calculator
{
public:
    double num1, num2;

    void setNumbers(double a, double b = 0)
    {
        num1 = a;
        num2 = b;
    }

    double add() { return num1 + num2; }
    double subtract() { return num1 - num2; }
    double multiply() { return num1 * num2; }
    double divide()
    {
        if (num2 == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return num1 / num2;
    }
    double power() { return pow(num1, num2); }
    double square() { return pow(num1, 2); }
    double sine() { return sin(num1 * M_PI / 180); }
    double cosine() { return cos(num1 * M_PI / 180); }
    double tangent() { return tan(num1 * M_PI / 180); }
    double root()
    {
        if (num1 < 0)
        {
            cout << "Error: Cannot find square root of a negative number!" << endl;
            return 0;
        }
        return sqrt(num1);
    }
};

int main()
{
    Calculator calc;
    int choice;
    double a, b;

    while (true)
    {
        cout << "\n--- Scientific Calculator ---\n";
        cout << "1. Add (a + b)\n";
        cout << "2. Subtract (a - b)\n";
        cout << "3. Multiply (a * b)\n";
        cout << "4. Divide (a / b)\n";
        cout << "5. Power (a ^ b)\n";
        cout << "6. Square (a^2)\n";
        cout << "7. Sine (sin a)\n";
        cout << "8. Cosine (cos a)\n";
        cout << "9. Tangent (tan a)\n";
        cout << "10. Square Root (√a)" << endl;
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            calc.setNumbers(a, b);
            cout << "Result: " << calc.add() << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            calc.setNumbers(a, b);
            cout << "Result: " << calc.subtract() << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            calc.setNumbers(a, b);
            cout << "Result: " << calc.multiply() << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            calc.setNumbers(a, b);
            cout << "Result: " << calc.divide() << endl;
            break;
        case 5:
            cout << "Enter base and exponent: ";
            cin >> a >> b;
            calc.setNumbers(a, b);
            cout << "Result: " << calc.power() << endl;
            break;
        case 6:
            cout << "Enter a number: ";
            cin >> a;
            calc.setNumbers(a);
            cout << "Result: " << calc.square() << endl;
            break;
        case 7:
            cout << "Enter angle in degrees: ";
            cin >> a;
            calc.setNumbers(a);
            cout << "Result: " << calc.sine() << endl;
            break;
        case 8:
            cout << "Enter angle in degrees: ";
            cin >> a;
            calc.setNumbers(a);
            cout << "Result: " << calc.cosine() << endl;
            break;
        case 9:
            cout << "Enter angle in degrees: ";
            cin >> a;
            calc.setNumbers(a);
            cout << "Result: " << calc.tangent() << endl;
            break;
        case 10:
            cout << "Enter a number: ";
            cin >> a;
            calc.setNumbers(a);
            cout << "Result: " << calc.root() << endl;
            break;

        case 0:
            cout << "Exiting...\n";
            return 0;
        default:
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
