// C Program to Demonstrate the Sum of Diagonals of a Matrix by taking input from the user
#include <stdio.h>

int main()
{

	int i, j, m = 5, n = 5, a = 0, sum = 0;
	int matrix[5][5];

	// if both rows and columns are equal then it is
	// possible to calculate diagonal sum
	if (m == n) {

        printf("Enter a 5×5 Matrix number: \n");
		// entering the coefficients of the matrix
		for (i = 0; i < m; ++i) {

			for (j = 0; j < n; ++j) {

				scanf("%d", &matrix[i][j]);
			}
		}
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
		printf("\nMain diagonal elements sum is = %d\n",sum);
		printf("Off-diagonal elements sum is = %d\n", a);
	}
	else
		// if both rows and columns are not equal then it is
		// not possible to calculate the sum
		printf("not a square matrix\n");
	return 0;
}
