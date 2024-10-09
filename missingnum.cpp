#include <iostream>
using namespace std;

int main() {


    int arr[] = {0, 1, 2, 3, 5, 6, 7, 8, 9}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int missingNumber = 0; 
    int i = 0;

    while (i < n) {
        
        if (arr[i] != missingNumber) {
            
            break;
        }
        missingNumber++;
        i++;
    }

    cout << "The smallest missing element is: " << missingNumber;

    return 0;
}

