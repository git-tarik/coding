#include <iostream>
using namespace std;
int sumofdigits(int n){
    int sum=0;
    while(n>0){
       int digit=n%10;
       sum=sum+digit;
       n=n/10;
    }
    return sum;
}
int main (){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int z=sumofdigits(n);
    cout<< "Sum of digits is: " << z << endl;
    return 0;
}