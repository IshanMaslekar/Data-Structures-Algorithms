class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();

        if (n*m != r*c)
        {
            return mat;
        }

        vector <vector <int>> temp (r, vector <int> (c,0));

        vector <int> matrix;

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                matrix.push_back (mat[i][j]);
            }
        }


        for (int i=r-1; i>=0; i--)
        {
            for (int j=c-1; j>=0; j--)
            {
                temp[i][j] = matrix.back();
                matrix.pop_back();
            }
        }

        return temp;
    }
};