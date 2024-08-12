// Brute Force Solution

class Solution {
public:

    void changeRows (vector<vector<int>>& matrix, int n, int m, int i)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] != 0)
            {
                matrix[i][j] = -20000;
            }
        }
    }

    void changeColumns (vector<vector<int>>& matrix, int n, int m, int j)
    {
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][j] != 0)
            {
                matrix[i][j] = -20000;
            }
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        // First pass: Mark rows and columns with a temporary value (-1)
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    changeRows(matrix, n, m, i);
                    changeColumns(matrix, n, m, j);  
                }
            }
        }

        // Second pass: Change all marked (-1) values to 0
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == -20000)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

// Optimal Solution