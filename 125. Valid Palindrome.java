class Solution {
    public boolean isPalindrome(String str) {
        str = str.toLowerCase();
        int i = 0, j = str.length() - 1;
        while (i < str.length() && j >= 0 && i < j) {

            while (!Character.isLetterOrDigit(str.charAt(i))) {
                i++;
                if (i >= str.length()) {
                    break;
                }
            }
            while (!Character.isLetterOrDigit(str.charAt(j))) {
                j--;
                if (j < 0) {
                    break;
                }
            }
            if (j < 0 || i > j || i >= str.length()) {
                break;
            }
            if (str.charAt(i) != str.charAt(j)) {
                return false;
            } else {
                i++;
                j--;
            }

        }
        return true;
    }
}