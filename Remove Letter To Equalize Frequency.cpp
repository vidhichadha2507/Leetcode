class Solution {
public:
    bool equalFrequency(string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        vector<int> v;
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        int mnc=0;
        int mxc=0;
        int mn=*min_element(v.begin(),v.end());
        int mx=*max_element(v.begin(),v.end());
        if(mp.size()==1) return 1; 
        if(mn==mx and mx==1 and mn==1) return 1;
        else if(mn==mx) return 0;
        else  
        {
            if(mx-mn==1)
            {
                for(auto it : mp)
                {
                    if(it.second==mn)
                    {
                        mnc++;
                    }
                    if(it.second==mx)
                    {
                        mxc++;
                    }
                }
                if(abs(mnc-mxc)==0 and mnc==1 and mxc==1) return 1;
                else if(abs(mnc-mxc)==0) return 0;
                else return 1;
            }
            else
            {
                return 0;
            }
        }
        return 0;
    }
};
