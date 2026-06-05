#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;

    for(int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int main() {
    int num;
    cin >> num;

    int original = num;
    int sum = 0;

    while(num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if(sum == original)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}