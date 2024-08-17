class Solution {
public:
    bool solveSudoku(vector<vector<char>>& board) {
        vector <unordered_set <int>> row(9), col(9), box(9);

        for (int i=0; i<9; i++)
        {
            for (int j=0; j<9; j++)
            {
                if (board[i][j] != '.')
                {
                    int num = board[i][j] - '0';
                    int boxIndex = (i/3)*3+(j/3);
                    row[i].insert(num);
                    col[j].insert(num);
                    box[boxIndex].insert(num);
                }
            }
        }

        return backtrack (board, row, col, box);
    }

    bool backtrack (vector <vector<char>>& board, vector <unordered_set <int>> &row,
    vector <unordered_set <int>> & col, vector <unordered_set <int>> &box, int i=0, 
    int j=0)
    {
        if (i == 9)
        {
            return true;
        }

        if (j == 9)
        {
            return backtrack (board, row, col, box, i+1, 0);
        }

        if (board[i][j] != '.')
        {
            return backtrack (board, row, col, box, i, j+1);
        }

        int boxIndex = (i/3)*3+(j/3);

        for (int num = 1; num <=9; num++)
        {
            if (row[i].count(num) == 0 && col[j].count(num) == 0 &&
            box[boxIndex].count(num) == 0)
            {
                board[i][j] = num + '0';
                row[i].insert (num);
                col[j].insert (num);
                box[boxIndex].insert (num);

                if (backtrack (board, row, col, box, i, j+1))
                {
                    return true;
                }
                else
                {
                    board[i][j] = '.';
                    row[i].erase (num);
                    col[j].erase (num);
                    box[boxIndex].erase (num);
                }
            }
        }
        return false;
    }
};