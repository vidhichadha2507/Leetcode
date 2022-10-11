class Solution {
    public boolean increasingTriplet(int[] nums) {
        if(nums.length<3||nums==null) return false;
        int smallest = Integer.MAX_VALUE;
        int smaller = Integer.MAX_VALUE;
        for(int i=0;i<nums.length;i++){
            if(nums[i]<smallest){
                smallest = nums[i];
            }
            if(nums[i]>smallest && nums[i]<smaller){
                smaller = nums[i];
            }
            if(nums[i]>smaller){
                return true;
            }
        }
        return false;
    }
}