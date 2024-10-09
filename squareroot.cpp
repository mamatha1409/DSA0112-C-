#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double number, result;

    cout << "Enter a number: ";
    cin >> number;

    if (number >= 0) {
        result = sqrt(number); 
        cout << "The square root of " << number << " is " << result ;
    } else {
        cout << "Error: Square root of a negative number is undefined in real numbers." ;
    }

    return 0;
}

