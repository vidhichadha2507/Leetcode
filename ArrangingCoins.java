// problem link :-https://leetcode.com/problems/arranging-coins/

class Solution {
    public int arrangeCoins(int n) {
        long low=1;
        long high=n;
        long mid=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            long k=mid*(mid+1)/2;
            if(k==n)
            {
                return (int)mid;
            }
            if(k<n)
            {
                low=mid+1;
            }
            
            else
            {
                high=mid-1;
            }

        }
        return (int)high;
        
    }
}
