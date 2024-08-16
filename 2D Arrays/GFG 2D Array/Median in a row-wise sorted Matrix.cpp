int median(vector<vector<int>>& matrix, int R, int C) {
    int s = 1, e = 2000; // Initial range for the binary search

    while (s <= e) {
        int m = (s + e) / 2; // Midpoint of the current range

        int countL = 0, countR = 0; // Counts for elements <= m and > m

        // Count elements less than or equal to m and greater than m
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (matrix[i][j] > m)
                    countR++;
                else
                    countL++;
            }
        }

        // Adjust the search range based on counts
        if (countL == countR)
            return m; // m is the median
        else if (countL < countR)
            s = m + 1; // Median is larger, adjust the start of the range
        else
            e = m - 1; // Median is smaller, adjust the end of the range
    }
    return s; // Final result after exiting the loop
}
