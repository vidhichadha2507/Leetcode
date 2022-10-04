class Solution {
    public int[] getConcatenation(int[] nums) {
        int n=2*nums.length;
        int[] ans=new int[n];  //answer array size twice the input size
        for(int i=0; i<n;i++){  
            if(i>=n/2){        //if size greater than inpur size 
                ans[i]=nums[i-nums.length];
            }
            if(i<n/2){         //if less then input size 
                ans[i]=nums[i];
            }
        }
        return ans;
    }
}
