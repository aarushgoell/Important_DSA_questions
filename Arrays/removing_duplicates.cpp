int removeDuplicates(vector<int> &arr, int n) {
	int index = 1;
    int count = 1;
    for(int i = 1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            arr[index] = arr[i];
            count++;
            index++;
        }
    }
    return count;
}


