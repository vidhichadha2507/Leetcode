class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k = 0;
        for(auto n: nums) k = max(k, n);
        
        int ans = 0;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == k){
                cnt++;
            }
            else{
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        ans = max(ans, cnt);
        return ans;
    }
};
