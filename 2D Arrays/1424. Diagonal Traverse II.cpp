class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map <int, vector <int>> mp;

        for (int i=0; i<nums.size(); i++)
        {
            for (int j=0; j<nums[i].size(); j++)
            {
                mp[i+j].push_back(nums[i][j]);
            }
        }

        vector <int> ans;

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            // sort (it -> second.begin(), it -> second.end());
            reverse (it -> second.begin(), it -> second.end());

            for (auto it2 = it -> second.begin(); it2 != it -> second.end(); it2++)
            {
                ans.push_back (*it2);
            }
            
        }

        return ans;
    }
};