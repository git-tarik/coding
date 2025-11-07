/*  ABCDE
    ABCDE
    ABCDE
    ABCDE
    ABCDE
    */ 

#include <iostream>
using namespace std;    
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        char ch='A';
        for (int j = 1; j <= 5; j++) {
            cout <<ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}