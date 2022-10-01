class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int m = queries.size();
        vector<int> res;
        
        vector<bool> even(n);
        
        int evenSum = 0;
        int oddSum = 0;
        
        for(int i = 0; i < n; i++){
            even[i] = (nums[i]%2 == 0);
            if(even[i]) evenSum += nums[i];
            else oddSum += nums[i];
        }
        
        int x = 0;
        bool is = false;
        
        for(vector<int> q: queries){
            x = nums[q[1]];
            is = even[q[1]];
            nums[q[1]] += q[0];
            
            if(abs(nums[q[1]])%2 == 0 && is == 0){
                evenSum += nums[q[1]];
                oddSum -= x;
                even[q[1]] = 1;
            }
            else if(abs(nums[q[1]])%2 != 0 && is == 1){
                oddSum += nums[q[1]];
                evenSum -= x;
                even[q[1]] = 0;
            }
            else if(abs(nums[q[1]]%2) == 0 && is == 1){
                evenSum += q[0];
            }
            else{
                oddSum += q[0];
            }
            res.push_back(evenSum);
        }
        return res;
    }
};
