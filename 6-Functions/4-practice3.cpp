#include<iostream>
using namespace std;

int factorial(int x) {
    int answer = 1;
    for(int i=x; i>=1; i--) {
        answer *= i;    
    }
    return answer;
}

int main() {
    int fact = factorial(5);
    cout << "factorial = " << fact << endl;
    return 0;
}