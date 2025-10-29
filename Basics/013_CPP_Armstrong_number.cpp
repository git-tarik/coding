#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,x,sum=0;
    cout<<"Enter the digit : "<<endl;
    cin>>n;
    int copyofn=n;
    while(n!=0){
        x=n%10;
        n=n/10;
        sum=sum+(x*x*x);
    }
    sum==copyofn? cout<<"Armstrong":cout<<"Not Armstrong";;

}