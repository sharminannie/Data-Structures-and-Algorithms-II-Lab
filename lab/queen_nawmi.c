
#include <stdio.h>

#define MAX 1000 // Maximum board size

int board[MAX];        // Array to store column positions of queens
int totalSolutions = 0; // Counter to track total solutions

// Function to check if placing a queen at (row, col) is safe
int isSafe(int row, int col, int n) {
    for (int i = 0; i < row; i++) {
        int j = board[i];
        // Check for column conflict
        if (j == col) {
            return 0;
        }
        // Check for diagonal conflicts
        if ((row-i) == (col-j) || (row-i) == (j-col)) {
            return 0;
        }
    }
    return 1;
}
void solveNQueens(int row, int n) {

    if (row == n) {
        // A valid solution is found
        totalSolutions++;
        printf("Solution %d:\n", totalSolutions);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i] == j) {
                    printf("Q");
                } else {
                    printf("#");
                }
            }
            printf("\n");
        }
        printf("\n");
        return;
    }
// Try placing a queen in every column of the current row
    for (int col = 0; col < n; col++) {
        if (isSafe(row, col,n)) {
            board[row] = col;             // Place the queen
            solveNQueens(row + 1, n);    // Recurse for the next row
        }
    }
}

// Main function
int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    if (n > MAX)
        {
        printf("Maximum supported value of N is %d.\n", MAX);
        return 1;

    }
     //Reset solution counter
    int totalSolutions = 0;
    solveNQueens(0, n);  // Start solving from row 0
    printf("Total Solutions: %d\n", totalSolutions);

}
