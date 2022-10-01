/*
14. Longest Common Prefix

Easy

10.5K

3.4K

Companies

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "
*/
class Solution {
public:
   string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        
        for(int i = 1; i < strs.size(); i++) {
            int j;
            for(j = 0; j < strs[i].size(); j++) {
                if(ans[j] != strs[i][j])
                    break;
            }
            ans = ans.substr(0, j);
            if(ans == "")
                return ans;
        }
        
        return ans;
    }
};
