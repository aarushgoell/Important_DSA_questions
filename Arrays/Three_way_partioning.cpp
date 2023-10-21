/*
Three way partitioning
EasyAccuracy: 41.58%Submissions: 125K+Points: 2
Given an array of size n and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
1) All elements smaller than a come first.
2) All elements in range a to b come next.
3) All elements greater than b appear in the end.
The individual elements of three sets can appear in any order. You are required to return the modified array.

Note: The generated output is 1 if you modify the given array successfully.


Example 1:

Input: 
n = 5
A[] = {1, 2, 3, 3, 4}
[a, b] = [1, 2]
Output: 1
Explanation: One possible arrangement is:
{1, 2, 3, 3, 4}. If you return a valid
arrangement, output will be 1.


Example 2:

Input: 
n = 3 
A[] = {1, 2, 3}
[a, b] = [1, 3]
Output: 1
Explanation: One possible arrangement 
is: {1, 2, 3}. If you return a valid
arrangement, output will be 1.
*/

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& nums,int a, int b)
    {
       int n = nums.size();
       int low = 0;
       int high = n-1;
       int mid = 0;
       for(int i = 0;i<=high;i++){
           if(nums[i]<a){
               swap(nums[low],nums[mid]);
               low++,mid++;
           }
           else if(nums[i]>b){
               swap(nums[high],nums[mid]);
               high--;
           }
           else{
               mid++;
           }
       }
    }
};