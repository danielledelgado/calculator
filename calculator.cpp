/**
* Name: Danielle Delgado Sosnowska
* Program Name: Make A Calculator
* Date: September 12, 2024
* Extra: using conditionals
*/

#include <iostream>
#include <cmath>
using namespace std;

// delcaring variables
float add, subtract, multiply, divide, mod, eoo1, eoo2, inc1, dec2;
float num1, num2;

int main()
{
    // user enters num1 and num 2
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;

    // math
    add = num1+num2;
    subtract = num1-num2;
    multiply = num1*num2;
    // to round to 2 decimal places, it has to be multiplied and divided by 100
    divide = round((num1/num2) * 100)/100;
    // needed int to use module
    mod = int(num1) % int(num2);
    eoo1 = int(num1) % 2;
    eoo2 = int(num2) % 2;
    inc1 = ++num1;
    dec2 = --num2;

    // results
    cout << "Results" << endl;
    cout << "Sum = " << add << endl;
    cout << "Difference = " << subtract << endl;
    cout << "Product = " << multiply << endl;
    cout << "Dividend = " << divide << endl;
    cout << "Module = " << mod << endl;
    // conditional statemts to show if the numbers are even or odd
    if (eoo1 == 0) {
        cout << "Even or Odd (num1) = Even" << endl;
    } else if (eoo1 == 1) {
        cout << "Even or Odd (num1) = Odd" << endl;
    }
    if (eoo2 == 0) {
        cout << "Even or Odd (num2) = Even" << endl;
    } else if (eoo2 == 1) {
        cout << "Even or Odd (num2) = Odd" << endl;
    }
    cout << "Incremented First Number = " << inc1 << endl;
    cout << "Decremented Second Number = " << dec2 << endl;
}