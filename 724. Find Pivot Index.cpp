// 724. Find Pivot Index
// Given an array of integers nums, calculate the pivot index of this array.
// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
// If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
// Return the leftmost pivot index. If no such index exists, return -1.
// Example 1:

// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11
--------------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:

int prefixsumapporch(vector<int>&nums){
    vector<int>lsum(nums.size(),0);
    vector<int>rsum(nums.size(),0);

    for(int i=1;i<nums.size();i++){
        lsum[i]=lsum[i-1]+nums[i-1];
    }

    for(int i=nums.size()-2;i>=0;--i){
        rsum[i]=rsum[i+1]+nums[i+1];
    }

for(int i=0;i<nums.size();++i){
    if(lsum[i]==rsum[i]) return i;
        }
        return -1;
    }
_____________________________________________________________
// brute force

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // brite force
        for(int i=0;i<nums.size()-1;i++){
            int Lsum=0;
            int Rsum=0;

            for(int j=0;j<i;j++){
                Lsum+=nums[j];
            }
            for(int j=i+1 ; j<nums.size();j++){
                Rsum+=nums[j];
            }

            if(Lsum==Rsum){
                return i;
            }
        }
        return -1;
    }
};

    int pivotIndex(vector<int>& nums) {
       return  prefixsumapporch(nums);
    }
};