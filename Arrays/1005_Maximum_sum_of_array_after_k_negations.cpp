/*

1005. Maximize Sum Of Array After K Negations
Solved
Easy
Topics
Companies
Given an integer array nums and an integer k, modify the array in the following way:

choose an index i and replace nums[i] with -nums[i].
You should apply this process exactly k times. You may choose the same index i multiple times.

Return the largest possible sum of the array after modifying it in this way.

  

Example 1:

Input: nums = [4,2,3], k = 1
Output: 5
Explanation: Choose index 1 and nums becomes [4,-2,3].
Example 2:

Input: nums = [3,-1,0,2], k = 3
Output: 6
Explanation: Choose indices (1, 2, 2) and nums becomes [3,1,0,2].
Example 3:

Input: nums = [2,-3,-1,5,-4], k = 2
Output: 13
Explanation: Choose indices (1, 4) and nums becomes [2,3,-1,5,4].
 

*/


class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int find = INT_MAX;
        int index = 0;
        for(int i = 0;i<n;i++){
            if(k>0){
            if(nums[i]<0){
                nums[i] = -1 * nums[i];
                k--;
                find = min(find,nums[i]);
            }
                    find = min(find,nums[i]);
                }
            }
        cout<<find;
        for(int i = 0;i<n;i++){
            if(find==nums[i]){
                index = i;
                break;
            }
        }

        if(k>0){
            if(k%2!=0){
                nums[index] = -1 * nums[index];
            }
        }
        int sum = accumulate(nums.begin(),nums.end(),0);
        return sum;
        
    }
};