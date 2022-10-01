int solve(vector<int> nums,int l,int r, int target)
{
    if(r>=l){
        int mid=l+(r+1)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        if(nums[mid]>target)
        {
            return solve(nums,l,mid-1,target);
        }
        return solve(nums,mid+1,r,target);
    }
    return -1;
}
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int p=solve(nums,0,nums.size(),target);
        return p;
    }
};
