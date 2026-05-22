class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map <string, vector<string>> mp1;
        vector<vector<string>> answer; 
        for(int i=0; i<strs.size(); i++)
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp1[temp].push_back(strs[i]);
        }

        for(auto it: mp1)
        {
            answer.push_back(it.second);
        }
        return answer;
    }
};
