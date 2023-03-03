// C Program Find the Sum of Diagonals & off Diagonal Matrix by using functions
#include <stdio.h>
const int max = 10;

// Declaration of function
int diagonal_sum(int m, int n, int matrix[][max])
{
	int i, j, a = 0, sum = 0;

	// if both rows and columns are equal then it is possible to calculate diagonal sum
	if (m == n) {

		// printing the input matrix
		printf("The matrix is \n");

		// iterates number of rows
		for (i = 0; i < m; ++i) {

			// iterates number of columns
			for (j = 0; j < n; ++j) {
				printf(" %d", matrix[i][j]);
			}
			printf("\n");
		}
		for (i = 0; i < m; ++i) {

			// calculating the main diagonal sum
			sum = sum + matrix[i][i];

			// calculating the off diagonal sum
			a = a + matrix[i][m - i - 1];
		}
		// printing the result
		printf("\nMain diagonal elements sum is = %d\n", sum);
		printf("Off-diagonal elements sum is = %d\n", a);
	}
	else
		// if both rows and columns are not equal then it is not possible to calculate the sum
		printf("not a square matrix\n");
}
int main()
{
	int m = 5, n = 5;

	// input matrix
	int matrix[][10] = {
                        { 1, 2, 3, 4, 5 },
                        { 6, 7, 8, 9, 10 },
                        { 11, 12, 13, 14, 15 },
                        { 16, 17, 18, 19, 20 },
                        { 21, 22, 23, 24, 25 }
                        };

	diagonal_sum(m, n, matrix);
	return 0;
}
