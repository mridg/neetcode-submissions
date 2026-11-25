class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> unique(nums.begin(), nums.end());

        if (nums.size() > unique.size()) {
            return true;
        } 
        return false;
    }
};