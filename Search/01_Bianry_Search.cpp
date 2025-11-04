//Iterative (without recursion)
# include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &arr ,int target){
    int n = arr.size();
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid= st+(end-st)/2;
        if(target < arr[mid]){
            end=mid-1;
        
        }
        else if(target > arr[mid]){
            st=mid+1;

        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr1={-1,0,5,9,12}; //odd
    int tar1=12;
    cout<<BinarySearch(arr1,tar1)<<endl;
    vector<int> arr2={-5,-1,0,5,9,12}; //even
    int tar2=-5;
    cout<<BinarySearch(arr2,tar2)<<endl;
    return 0;
}