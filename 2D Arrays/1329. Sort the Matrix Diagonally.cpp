class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        map <int, vector <int>> mp;
        int n = mat.size();
        int m = mat[0].size();

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                mp [i-j].push_back (mat[i][j]);
            }
        }

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            sort (it -> second.begin(), it -> second.end());
        }

        for (int i=n-1; i>=0; i--)
        {
            for (int j=m-1; j>=0; j--)
            {
                mat[i][j] = mp[i-j].back();
                mp[i-j].pop_back(); 
            }
        }

        return mat;
    }
}
