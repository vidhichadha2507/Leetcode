/*
 * @lc app=leetcode id=88 lang=java
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int insertIndex = m + n - 1;
        int indexA = m - 1, indexB = n - 1;

        while (indexB >= 0) {
            if (indexA < 0) {
                nums1[insertIndex--] = nums2[indexB--];
            } else {
                if (nums2[indexB] >= nums1[indexA]) {
                    nums1[insertIndex--] = nums2[indexB--];
                } else {
                    nums1[insertIndex--] = nums1[indexA--];
                }
            }
        }
    }
}

// @lc code=end

