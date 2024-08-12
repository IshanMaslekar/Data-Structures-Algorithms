//Brute Force Solution 

#include <bits/stdc++.h> 
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    
    vector <vector <int>> dummy (n, (vector <int> (n,0)));

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            dummy[n-i-1][j] = matrix[j][i];
        }
    }

    return dummy;
}

// Optimal Solution

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int total = rows*cols;
        int count = 0;

        int left = 0;
        int right = cols-1;
        int top = 0;
        int bottom = rows-1;

        vector <int> ans;

        while (count < total)
        {
            for (int i = left; count<total && i<=right; i++)
            {
                ans.push_back (matrix[top][i]);
                count++;
            }
            top++;

            for (int i = top; count<total && i<=bottom; i++)
            {
                ans.push_back (matrix[i][right]);
                count++;
            }
            right--;

            for (int i = right; count<total && i>=left; i--)
            {
                ans.push_back (matrix[bottom][i]);
                count++;
            }
            bottom--;

            for (int i = bottom; count<total && i>=top; i--)
            {
                ans.push_back (matrix[i][left]);
                count++;
            }
            left++;
        }

        return ans;
    }
};