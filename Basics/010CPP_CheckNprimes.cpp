#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int m=2;m<n;m++){
        bool isPrime = true;
    
    if (m <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= m; i++) {
            if (m % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << m << " is a prime number." << endl;
    } else {
        cout << m << " is not a prime number." << endl;
    }

    }
    

    return 0;
}
