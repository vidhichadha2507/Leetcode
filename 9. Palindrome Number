class Solution {
    public boolean isPalindrome(int x) {
        int org = x;
        int rev = 0;
        
        while(org > 0){
            int unit = org%10;
            rev = 10*rev+unit;
            org/=10;
        }
        
        return rev == x;
    }
}
