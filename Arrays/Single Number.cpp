class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum =0;
        int length = nums.size();
        for(int i =0; i<length;i++){
            sum = sum ^ nums[i]; //use of XOR
        }

        return sum;
    }
};
