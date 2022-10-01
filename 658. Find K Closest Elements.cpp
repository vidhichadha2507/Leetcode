class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> res;
        int n = arr.size();
        if(x < arr[0]){
            for(int i = 0; i < k; i++) res.push_back(arr[i]);
            return res;
        }
        else if(x > arr[n-1]){
            for(int i = n-1; i >= k; i--){
                res.push_back(arr[i]);
            }
            sort(res.begin(), res.end());
            return res;
        }
        
        
        map<int, priority_queue<int, vector<int>, greater<int>> > mp;
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i = 0; i < n; i++){
            pq.push(abs(x-arr[i]));
            mp[abs(x-arr[i])].push(i);
        }
        
        
        while(k){
            int x = pq.top();
            pq.pop();
            while(mp[x].size() && k){
                res.push_back(arr[mp[x].top()]);
                mp[x].pop();
                k--;
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};
