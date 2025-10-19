// WAP to print prime numbers b/w 2 to N

#include <iostream>
using namespace std;

bool checkprime (int n){
    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (checkprime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}