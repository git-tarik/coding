//without recursion
# include <iostream>
#include <vector>
using namespace std;

int recBinarySearch(vector<int> &arr ,int target,int st,int end){
  if(st<=end){
        int mid= st+(end-st)/2;
        if(target < arr[mid]){
            return recBinarySearch(arr,target,st,mid-1);
        }
        else if(target > arr[mid]){
            return recBinarySearch(arr,target,mid+1,end);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={-1,0,5,9,12}; //odd
    int tar=12;
    int n = arr.size();
    int st=0;
    int end=n-1;
    cout<<recBinarySearch(arr,tar,st,end)<<endl;
    return 0;
}