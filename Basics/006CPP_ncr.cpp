#include <iostream>
using namespace std;

int fact(int n){
   int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int ncr(int n, int r){
  int a = fact(n);
  int b = fact(r);
  int c = fact(n - r);
    return a / (b * c);
}
int main(){
    int n=8 , r=2;
    int z=ncr(n,r);
    cout<< z << endl;
    return 0;
}

