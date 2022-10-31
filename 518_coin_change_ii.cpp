class Solution {
public:
    
    int miniCoins(int ind, int target, vector<int>& coins, vector<vector<int>>&dp)
    {
        // base cases 
        if(ind==0)
        {
            if(target%coins[0]==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        if(dp[ind][target]!=-1)
        {
            return dp[ind][target];
        }
        long long notTake = miniCoins(ind-1, target, coins, dp);
        long long take = 0; 
        if(coins[ind]<=target)
        {
            take = miniCoins(ind, target-coins[ind],coins, dp);
        }
        return dp[ind][target] = take + notTake;
    }
    
    int change(int amount, vector<int>& coins) {
        
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        
        return miniCoins(n-1, amount, coins, dp);
    }
};
