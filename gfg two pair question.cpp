// Given an array arr[] of integers and another integer target. Determine if there exist two distinct indices such that the sum of their elements is equal to the target.

// Examples:

// Input: arr[] = [0, -1, 2, -3, 1], target = -2
// Output: true
// Explanation: arr[3] + arr[4] = -3 + 1 = -2
// ---------------------------------------------------------------------------------------
#include<vector>
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        
        sort(arr.begin(),arr.end());
        // code here
        int n=arr.size()-1;
        int l=0;
        int h=n;
        while(l<h){
            int csum=arr[l]+arr[h];
            
            if(csum==target){
                return true;
            }else if(csum>target){
                h--;
            }else{
                l++;
            }
        }
        return false;
    }
};