class Solution {
  public:
    int maxSubarraySum(vector<int> &nums) {
        // Code here
        int n = nums.size();
        int ans = INT_MIN;
        int curSum =0;
        for(int i = 0; i < n; i++)
        
        {curSum += nums[i];
       ans = max(ans, curSum);

       if(curSum<0){
        curSum =0;
       }
       
         }      
        return ans;
    }
};
