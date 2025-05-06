#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    char op;
    cout << "Enter the operation you want to do: ";
    cin >> op;
    float result;

    /*
    if (op == '+') {
        result = a+b;
        cout << result << endl;
    } else if (op == '-') {
        result = a-b;
        cout << result << endl;
    } else if (op == '*') {
        result = a*b;
        cout << result << endl;
    } else if (op == '/') {
        result = a/b;
        cout << result << endl;
    } else {
        cout << "invalid input" << endl;
    }
    */
    switch (op){
        case '+':
            result = a+b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            result = a/b;
            break;
        default:
        cout << "Invalid Input" << endl;
            break;
    }
    cout << a << op << b << "=" << result << endl;

    return 0;


}