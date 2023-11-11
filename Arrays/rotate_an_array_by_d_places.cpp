


/*

Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.


Example:
'arr '= [1,2,3,4,5]
'k' = 1  rotated array = [2,3,4,5,1]
'k' = 2  rotated array = [3,4,5,1,2]
'k' = 3  rotated array = [4,5,1,2,3] and so on.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
8
7 5 2 11 2 43 1 1
2
Sample Output 1:
2 11 2 43 1 1 7 5
Explanation of Sample Input 1:
Rotate 1 steps to the left: 5 2 11 2 43 1 1 7
Rotate 2 steps to the left: 2 11 2 43 1 1 7 5
Sample Input 2:
4
5 6 7 8
3
Sample Output 2:
8 5 6 7
Explanation of Sample Input 2:
Rotate 1 steps to the left: 6 7 8 5
Rotate 2 steps to the left: 7 8 5 6
Rotate 2 steps to the left: 8 5 6 7
Expected Time Complexity:
O(n), where ‘n’ is the size of the array ‘arr’ and ‘k’ is the number of rotations.
Constraints:
1 <= 'n' <= 10^3
1 <= 'arr'[i] <= 10^9
1 <= 'k' < 'n'


*/

vector<int> rotateArray(vector<int>arr, int k) {
    
    // This is taking O(d) space and time complexity is o(n) 

    // if there are rotations more than the size of array then we will do modulo

    k = k%n;
    int temp[k];
    // First we will copy all the elements that will be inserted in the end before rotation 
    for(int i  = 0;i<k;i++){
        temp[i] = arr[i];
    }
    // Array starts with k we will put in the starting of the array 
    for(int i = k;i<n;i++){
        arr[i-k] = arr[i];
    }

// The values that we have copied we will now inserted in the end

    for(int i = n-k;i<n;i++){
        arr[i] = arr[i-(n-k)];
    }

// We can do this by reversing the array which takes O(n) time complexity 

reverse(arr.begin(),arr.begin()+k);
reverse(arr.begin()+k,arr.end());
reverse(arr.begin(),arr.end());



return arr;




}