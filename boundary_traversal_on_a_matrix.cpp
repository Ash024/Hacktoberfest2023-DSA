#include <iostream>

using namespace std;

void boundaryTraversal(int matrix[][100], int n, int m) {
    // Print the top row.
    for (int j = 0; j < m; j++) {
        cout << matrix[0][j] << " ";
    }

    // Print the right column.
    for (int i = 1; i < n - 1; i++) {
        cout << matrix[i][m - 1] << " ";
    }

    // Print the bottom row.
    for (int j = m - 1; j >= 0; j--) {
        cout << matrix[n - 1][j] << " ";
    }

    // Print the left column.
    for (int i = n - 2; i >= 1; i--) {
        cout << matrix[i][0] << " ";
    }
}

int main() {
    int n = 4;
    int m = 4;
    int matrix[4][4] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12},
                       {13, 14, 15, 16}};

    // Print the boundary elements of the matrix
    boundaryTraversal(matrix, n, m);

    return 0;
}
