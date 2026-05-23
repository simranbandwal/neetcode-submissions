class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        vector<pair<int,int>> pairs;
        vector<int> ans;

        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto i: mp)
        {
            pairs.push_back({i.first, i.second});
        }
        sort(pairs.begin(), pairs.end(),
        [](pair<int,int>& a, pair<int,int>& b)
        {
            return a.second > b.second;
        });

        for(int i=0; i<k; i++) 
        { ans.push_back(pairs[i].first); }
        return ans;
    }
    
};
