class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int l =0;
        int r = 0;
        int target =0;
        sort(nums.begin(), nums.end());

        for(int i =0; i<nums.size(); i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            l = i+1;
            r = nums.size() - 1;
            while(l<r)
            {
            target = -(nums[i]);
            if (nums[l] + nums[r] == target) 
            {
                ans.push_back({nums[i], nums[l], nums[r]});
                while (l < r && nums[l] == nums[l + 1]) l++; // Skip duplicates for l
                while (l < r && nums[r] == nums[r - 1]) r--; // Skip duplicates for r
                l++;
                r--;
            } 
            else if (nums[l] + nums[r] < target) 
            {
                l++;
            }   
            else 
            {
                r--;
            }
            }
        }
        return ans;
    }
};
