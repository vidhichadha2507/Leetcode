class Solution {
    public boolean isPalindrome(String s) {
        int left = 0;
        int right = s.length()-1;
        
        while (left < right){
            char c1 = s.charAt(left);
            char c2 = s.charAt(right);
            
            //if c1 is not valid then move forward
            if (!Character.isLetterOrDigit(c1)) left++;
            // if c2 is not valid move backward
            else if (!Character.isLetterOrDigit(c2)) right--;
            // otherwise compare
            else{
                if (Character.toLowerCase(c1) != Character.toLowerCase(c2)) return false;    
                left++;
                right--;    
            }
        }
        
        return true;
    }
}
