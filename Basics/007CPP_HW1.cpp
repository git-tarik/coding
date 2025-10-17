/*WAP to check whether a 
 number is prime or not
 using function*/

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
int main(){
    int n;
    cout<<"Enter the number";
    cin>> n ;
    if(checkprime(n)){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    return 0;
}