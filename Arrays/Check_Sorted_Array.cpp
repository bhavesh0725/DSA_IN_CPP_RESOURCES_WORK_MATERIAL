class Solution {
public:
    bool check(vector<int>& nums) {
         vector<int>original(nums);//
    
    sort(nums.begin(),nums.end());
    if(nums==original){
        return true;
    }
    else{
        return false;
    }
    }
};
