/*  123
    456
    789
    */ 

#include <iostream>
using namespace std;    
int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 3; j++) {
            cout <<i;
            i++;
        }
        i--;
        cout << endl;
    }
//or
 int num=1;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout <<num;
            num++;
        }
        cout << endl;
    }

    return 0;
}