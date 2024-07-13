## Binary Search
#Ques:1 You are given an integer array 'A' of size 'N', sorted in non-decreasing order. You are also given an integer 'target'. Your task is to write a function to search for 'target' in the array 'A'. If it exists, return its index in 0-based indexing. If 'target' is not present in the array 'A', return -1.

int search(vector<int> &nums, int target) {
    // Write your code here.
    int n = nums.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            high = mid-1;
        }
        else{
            low = mid +1;
        }
      
    }
    return -1;
}

#Ques:2 (Lower Bound)
#Problem statement
You are given an array 'arr' sorted in non-decreasing order and a number 'x'. You must return the index of the lower bound of 'x'.


#Note:
#1. For a sorted array 'arr', 'lower_bound' of a number 'x' is defined as the smallest index 'idx' such that the value 'arr[idx]' is not less than 'x'.If all numbers are smaller than 'x', then 'n' should be the 'lower_bound' of 'x', where 'n' is the size of array.

#2. Try to do this in O(log(n)).

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low = 0;
	int high = n-1;
	int ans = n;
	while(low<=high){
		int mid = (low + high)/2;
		if (arr[mid]>=x){
			ans = mid;
			high = mid-1;

		}
		else{
			low = mid +1;
		}
	}
	return ans;

}
