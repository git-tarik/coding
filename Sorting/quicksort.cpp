#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr,int st,int end){
    int idx=st,pivot=end;
    for(int j=st;j<arr.size();j++){
        if(arr[j]<pivot){
            swap(arr[j],arr[pivot]);
            
        }
    }
}

void quicksort(vector<int>& arr,int st,int end){
    if(st<end){
        int pivIdx=partition(arr,st,end);
        quicksort(arr,st,pivIdx-1);
        quicksort(arr,pivIdx+1,end);
    }
}


int main(){
    vector<int> arr={8,3,6,2,7,1};
    quicksort(arr,0,arr.size()-1);
    for(int x:arr) cout<<x;
    return;
}