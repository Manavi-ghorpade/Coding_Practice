class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col = matrix[0].size(); // Number of columns
        int top = 0; // Initialize the top row index
        int bottom = matrix.size() - 1; // Initialize the bottom row index
        int row = -1; // Initialize the row index where the target might exist

        // Binary search to find the row where the target might exist
        while (top <= bottom) {
            int mid = (top + bottom) / 2; // Calculate the middle row index
            if (target < matrix[mid][0]) {
                bottom = mid - 1; // Narrow the search to the upper half
            } else if (target > matrix[mid][col - 1]) {
                top = mid + 1; // Narrow the search to the lower half
            } else {
                row = mid; // Found the row where the target might exist
                break;
            }
        }

        if (row == -1) {
            return false; // If the row index is not found, target doesn't exist
        }

        int l = 0; // Initialize the left column index
        int r = col - 1; // Initialize the right column index

        // Binary search within the found row to find the target element
        while (l <= r) {
            int mid = (l + r) / 2; // Calculate the middle column index
            if (target < matrix[row][mid]) {
                r = mid - 1; // Narrow the search to the left half
            } else if (target > matrix[row][mid]) {
                l = mid + 1; // Narrow the search to the right half
            } else {
                return true; // Target found
            }
        }
        return false; // Target not found
    }
};