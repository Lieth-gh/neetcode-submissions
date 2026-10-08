class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_map<int , int> read;
    for(int i = 0;i<nums.size();i++){
        if(read.find(nums[i]) != read.end()){
            return true;
        }
        read[nums[i]] = i;
    }
    return false;
    }
};