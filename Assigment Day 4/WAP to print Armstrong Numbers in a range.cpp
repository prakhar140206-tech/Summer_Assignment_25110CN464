#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for(int i = start; i <= end; i++) {
        int num = i;
        int sum = 0;

        while(num > 0) {
            int digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }

        if(sum == i)
            cout << i << " ";
    }

    return 0;
}