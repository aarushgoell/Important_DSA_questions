/*

42. Trapping Rain Water
Hard
29.7K
429
Companies
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 

Example 1:


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9
 

Constraints:

n == height.length
1 <= n <= 2 * 104
0 <= height[i] <= 105

 The logic behind this question is that side bars cant store the water only in the middle the water can be stored  

and in the middle we can only store water by taking support of side bars . side bars means the maximum bar in the left and the maximum bar in the right. And the water stored will be minimum(left max,right max) - element at that point

*/

// int trapping(int arr[], int n){
//     int result;
//     for(int i = 1;i<n-1;i++){
//         int leftmax = arr[i];
//         for(int j = 0;j<i;j++){
//             leftmax = max(leftmax,arr[j]);
//         }
//         int rightmax = arr[i];
//         for(int k = i+1;k<n;k++){
//             rightmax = max(rightmax,arr[k]);
//         }
//         result += min(leftmax,rightmax) - arr[i];
//     }
// }

// another approach is to precompute the left max and right max for every element and we can do that by storing left max and right max in different arrays
#include<iostream>
using namespace std;
int trapping(int arr[], int n){
int result = 0;
int leftmax[n];
int rightmax[n];

leftmax[0] = arr[0];//intitially we have taken the leftmax as arr[0];becuase there is nothing max in the left of i.
for(int i = 1;i<n;i++){
    leftmax[i] = max(arr[i],leftmax[i-1]);
}
rightmax[n-1] = arr[n-1];
for(int i = n-2;i>=0;i--){
    rightmax[i] = max(rightmax[i+1],arr[i]);
}

for(int i = 1;i<n-1;i++){
    result +=min(leftmax[i],rightmax[i]) - arr[i];
}
return result;

}
int main(){
    
    // int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int arr[] = {4,2,0,3,2,5};
    

    int n  = sizeof(arr)/sizeof(arr[0]);
    cout<<trapping(arr,n);

    return 0;
}