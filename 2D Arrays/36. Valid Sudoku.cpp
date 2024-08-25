class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector <unordered_set <int>> row(9), col(9), box(9);

        for (int i=0; i<9; i++)
        {
            for (int j=0; j<9; j++)
            {
                if (board[i][j] == '.')
                {
                    continue;
                }

                int num = board[i][j] - '0';

                int boxIndex = (i/3)*3 + (j/3);

                if (row[i].count(num) == 1 || col[j].count(num) == 1
                || box[boxIndex].count(num) == 1)
                {
                    return false;
                }

                row[i].insert (num);
                col[j].insert (num);
                box[boxIndex].insert (num);
            }
        }
        return true;
    }
};