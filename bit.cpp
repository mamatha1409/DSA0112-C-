#include<iostream>
using namespace std;
int setNthBit(int num, int n) {
    int mask = 1 << n;
    num = num | mask;
    return num;
}
int main() {
    int num, n;
    cout << "Enter Number: ";
    cin >> num;
    cout << "Enter bit number you wish to set: ";
    cin >> n;    
    num = setNthBit(num, n-1); 
    cout << "Bit set Successfully" << endl;
    cout << "Answer: " << num << endl; 
}
