class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector <int> ans;

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                bool isPeak = true;
                if (i-1 >= 0 && mat[i][j] <= mat[i-1][j])
                {
                    isPeak = false;
                }

                if (i+1 < n && mat[i][j] <= mat[i+1][j])
                {
                    isPeak = false;
                }

                if (j-1 >=0 && mat[i][j] <= mat[i][j-1])
                {
                    isPeak = false;
                }

                if (j+1 < m && mat[i][j] <= mat[i][j+1])
                {
                    isPeak = false;
                }

                if (isPeak == true)
                {
                    return {i,j};
                }
            }
        }

        return {-1,-1};
    }
};