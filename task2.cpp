#include <iostream>
using namespace std;

int main() {
    double a, b, result;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    if (op == '+') result = a + b;
    else if (op == '-') result = a - b;
    else if (op == '*') result = a * b;
    else if (op == '/') result = b ? a / b : 0;
    cout << "Result: " << result << endl;
    return 0;
}
