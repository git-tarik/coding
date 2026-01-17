//O(n^2)

#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int j;
    for(int i=0;i<n-1;i++){
        int smallestIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex=j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
}
                

int main(){
    int arr[5] = {5, 3, 8, 4, 2};
    int n=5;
    selectionSort(arr, 5);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}