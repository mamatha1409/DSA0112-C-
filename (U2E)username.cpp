#include <iostream>
#include <string>
using namespace std;

int main() {
    string username1, username2;

    cout << "Enter the user name: ";
    getline(cin, username1);

    cout << "Reenter the user name: ";
    getline(cin, username2);

    if (username1== username2) {
        cout << "The username is valid." << endl;
    } else {
        cout << "The username is not valid." << endl;
    }

    return 0;
}
