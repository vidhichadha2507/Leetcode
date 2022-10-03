class Solution {
public:
    int solve(string colors,vector<int>&neededTime,  int i){

        int ans = 0;
        int maxm = INT_MIN;
        while(i<colors.length()){
            maxm = INT_MIN;
            while(i+1<colors.length() and colors[i] == colors[i+1]){
                maxm = max(maxm, neededTime[i]);
                ans+=neededTime[i];
                i+=1;
            }
            if(i>0 and colors[i] == colors[i-1]){
                    ans+=neededTime[i];
                maxm = max(neededTime[i],maxm);
            }
            ans = maxm!=INT_MIN?ans - maxm:ans;
            i++;
        }
        return ans;
    }
    int minCost(string colors, vector<int>& neededTime) {
        return solve(colors,neededTime,0);
    }
};