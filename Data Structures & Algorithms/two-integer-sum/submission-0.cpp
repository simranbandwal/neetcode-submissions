class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> mp;
        for(int i =0; i<nums.size(); i++)
        {
            int desired = target - nums[i];
            if(mp.find(desired) != mp.end())
            {
                return {mp[desired], i};
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};
