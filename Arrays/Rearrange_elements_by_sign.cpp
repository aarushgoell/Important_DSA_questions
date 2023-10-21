class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     int n = nums.size();
    // below two answers are if nums of postive and negative are same 

    // This is one way of doing this by just seperating two positive and negative arrays and just merging them  
    //  vector<int> pos;
    //  vector<int> negative;
    //  for(int i = 0;i<n;i++){
    //      if(nums[i]<0){
    //          negative.push_back(nums[i]);
    //      }
    //      else{
    //      pos.push_back(nums[i]);}
    //  }
    //  for(int i = 0;i<pos.size();i++){
    //      nums[2*i] = pos[i];
    //      nums[2*i+1] = negative[i];   
    //  }
    // return nums; 
    // }

    // Another way is by making only one vector;

    vector<int> answer(n,0);
    int pos =  0,neg = 1;
    for(int i  = 0;i<n;i++){
        if(nums[i]<0){
            answer[neg] = nums[i];
            neg += 2;
        }
        else{
            answer[pos] = nums[i];
            pos += 2;
        }
    }
    return answer;

    // THis is when the number of positives and number of negatives are not same 
    //  vector<int> pos;
	//     vector<int> neg;
	//     for(int i = 0;i<n;i++){
	//         if(arr[i]<0){
	//             neg.push_back(nums[i]);
	//         }
	//         else{
	//             pos.push_back(nums[i]);
	//         }
	//     }
	//     if(pos.size()>neg.size()){
	//     for(int i = 0;i<neg.size();i++){
	//         arr[2*i] = pos[i];
	//         arr[2*i+1] = neg[i];
	//     }
	//     int index = 2 * neg.size();
	//     for(int i = neg.size();i<pos.size();i++){
	//         nums[index] = pos[i];
	//         index++;
	//     }
	//     }
	//     else{
	//      for(int i = 0;i<pos.size();i++){
	//         nums[2*i] = pos[i];
	//         nums[2*i+1] = neg[i];
	//     } 
	//     int index = 2 * pos.size();
	//     for(int i = pos.size();i<neg.size();i++){
	//         nums[index] = neg[i];
	//         index++;
	//     }
	}
    }

     
};