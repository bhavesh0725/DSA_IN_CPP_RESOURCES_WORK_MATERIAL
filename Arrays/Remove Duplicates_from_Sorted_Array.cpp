class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      set<int>a(nums.begin(),nums.end());//converts the vector into set by using the set constructor
	// arr.resize(a.size());
	// copy(a.begin(), a.end(),arr.begin());
			// or
	nums.assign(a.begin(),a.end());// reassign the content of set to the array
	return nums.size();  
    }
};
