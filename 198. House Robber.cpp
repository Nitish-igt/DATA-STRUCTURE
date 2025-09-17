class Solution {
public:
        int robhelper(vector<int>&nums, int i){
            // base case
            if(i>=nums.size()) return 0;
            // ek sol case
            int rob1amt=nums[i]+robhelper(nums, i+2);
            int rob2amt=0+robhelper(nums,i+1);
            return  max(rob1amt, rob2amt);
            // baaki ka recursion
           
        }
    int rob(vector<int>& nums) {
      return  robhelper(nums,0);
    }
};