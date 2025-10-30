//brute force approach for gcd
#include<iostream>
using namespace std;

//RecursionEuclid
int gcdRec(int a , int b){
    if(b==0) return a ;
    return gcdRec(b,a%b);
}

//Euclid
int gcdfun(int a , int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    return a;
}



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
    cout<<"gcd is:"<<gcd<<endl<<gcdRec(20,28)<<endl;
}



