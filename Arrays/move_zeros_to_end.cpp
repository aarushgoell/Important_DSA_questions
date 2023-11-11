/*


Given an array 'arr' of 'n' non-negative integers, your task is to move all the zeros to the end of the array while keeping the non-zero elements at the start of the array in their original order. Return the modified array.


Example :
Input: ‘n’ = 5, ‘arr’ = [1, 2, 0, 0, 2, 3]
Output: [1, 2, 2, 3, 0, 0]

Explanation: Moved all the 0’s to the end of an array, and the rest of the elements retain the order at the start.
Detailed explanation ( Input/output format, Notes, Images )
Sample input 1:
4
0 0 0 1 
Sample output 1:
1 0 0 0 
Explanation of sample input 1:
Output: [1, 0, 0, 0]

We move all the 0’s to the end of an array, and the rest of the elements retained the order at the start.
Sample input 2:
5
4 0 3 2 5 
Sample output 2:
4 3 2 5 0 
Explanation of sample input 2:
Output: [4, 3, 2, 5, 0]

we move all the 0’s to the end of an array, and the rest of the elements retained the order at the start.
Expected time complexity:
 The expected time complexity is O(n).
Constraints:
1 ≤ n ≤ 10^6
0 ≤ arr[i] ≤ 10^9

Time limit: 1 sec


*/
// The intuition behind this is that to make index vvariable that will  insert non zeros values from the starting and then if there is any zero then it will insert in the end 
vector<int> moveZeros(int n, vector<int> arr) {
   int index = 0;
   for(int i = 0;i<n;i++){
       if(arr[i]!=0){
           arr[index] = arr[i];
           index++;
       }
   }
   for (int i = index; i < n; i++) {
       arr[i] = 0;
   }
return arr;
}

// And the second approach is to make a temperorry array that will stores non zeros values and then by insertinf those values in to original array from temp one by one and then lest of the values will be zeros

// And then second apporach is to make two pointers j and i where j will always point to zero and i will always pint to non zero if i will be non zero then we will swap the values and then we will increment both i and  j if i is not non zero then we will only increment i to look for non zero value
int j = -1;
for(int i = 0;i<n;i++){
    if(arr[i]==0){
        j = i;
        break;
    }
}
for(int i = j+1;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
}
