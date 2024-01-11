#include <iostream>
#include <vector>

std::vector<int> spiralOrder(const std::vector<std::vector<int>>& matrix) {
    std::vector<int> result;

    if (matrix.empty() || matrix[0].empty()) {
        return result; // Return an empty vector for an empty matrix
    }

    const int m = matrix.size();
    const int n = matrix[0].size();

    result.reserve(m * n);

    int left = 0, right = n - 1, top = 0, bottom = m - 1;

    while (left <= right && top <= bottom) {
        // Traverse top row
        for (int i = left; i <= right; ++i) {
            result.push_back(matrix[top][i]);
        }
        top++;

        // Traverse right column
        for (int i = top; i <= bottom; ++i) {
            result.push_back(matrix[i][right]);
        }
        right--;

        // Traverse bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        // Traverse left column
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return result;
}

int main() {
    // Example 1
    std::vector<std::vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::vector<int> result1 = spiralOrder(matrix1);

    std::cout << "Output for Example 1: ";
    for (int num : result1) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // Example 2
    std::vector<std::vector<int>> matrix2 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    std::vector<int> result2 = spiralOrder(matrix2);

    std::cout << "Output for Example 2: ";
    for (int num : result2) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
