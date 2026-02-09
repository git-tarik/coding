/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

//moore's voting algorithm

//O(nlogn)
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int majority(vector<int> & nums){
    int freq=0, ans=0,n=nums.size();
    for(int i=0 ; i<n ; i++){
        if(freq == 0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            freq++;
            }
        else{
            freq--;
        } 
        }
    /*if not sure majority element is present or not then
        int count=0;
    for (int i : nums){
        if(i==ans){
            count++;
        }
    }
    if(count > n/2){
        return ans;
        }
    else{
        return -1;
        }
        */
    return ans;
}

int main(){
    vector<int> nums={1,2,3,4};
    int ans=majority(nums);
    cout<<ans;
    return 0;
}