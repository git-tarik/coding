#include<iostream>
using namespace std;

int main(){
    int m,n,gcd=1;
    cout<<"Enter first number:"<<endl;
    cin>>m;
    cout<<"Enter second number:"<<endl;
    cin>>n;
    for(int i =1; i< min(m,n);i++){
        if(m%i==0 && n%i==0){
            gcd=i;
        }
    }
    cout<<"lcm is:"<<(m*n)/gcd<<endl;
}

