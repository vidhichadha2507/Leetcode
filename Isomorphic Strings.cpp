class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<int,int> mp;
        bool y;
        bool y1;
        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]=t[i];
            }
            else
            {
                if(mp[s[i]]==t[i])
                {
                    y=true;
                }
                else
                {
                    y=false;
                    break;
                }
            }
        }
        map<int,int> mp1;
        for(int i=0;i<t.length();i++)
        {
            if(mp1.find(t[i])==mp1.end())
            {
                mp1[t[i]]=s[i];
            }
            else
            {
                if(mp1[t[i]]==s[i])
                {
                    y1=true;
                }
                else
                {
                    y1=false;
                    break;
                }
            }
        }
        if(y && y1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
