class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        map <int, vector <int>> mp;

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                mp [i+j].push_back (mat[i][j]);
            }
        }

        vector <int> ans;

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it -> first % 2 == 0)
            {
                reverse (it -> second.begin(), it -> second.end());
            }

            for (auto it2 = it -> second.begin(); it2 != it -> second.end(); it2++)
            {
                ans.push_back (*it2);
            }
        }

        return ans;
    }
};