#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;

    int original = num;
    int sum = 0;

    while(num > 0) {
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }

    if(sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}