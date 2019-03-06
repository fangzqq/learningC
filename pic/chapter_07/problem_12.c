# include <stdio.h>

void transposeMatrix(int nRows, int nCols, int array1[nRows][nCols], int array2[nCols][nRows])
{
    int i, j;

    for ( i = 0; i < nRows; ++i)
        for (j = 0; j < nCols; ++j)
            array2[j][i] = array1[i][j];

}


void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols])
{
    int row, column;
    
    for (row = 0; row < nRows; ++row) {
        for (column = 0; column < nCols; ++column)
            printf("%5i", matrix[row][column]);
    
    printf("\n");
    }
}


int main (void)
{
    int sampleMatrix[3][5] = {
        {7, 16, 55, 13, 12},
        {12, 10, 52, 0, 7},
        {-2, 1, 2, 4, 9}
    };
    int targetMatrix[5][3];
    void transposeMatrix(int nRows, int nCols, int [nRows][nCols], int [nCols][nRows]);
    void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols]);

    transposeMatrix(3, 5, sampleMatrix, targetMatrix);

    displayMatrix(3, 5, sampleMatrix);
    printf("\n");
    displayMatrix(5, 3, targetMatrix);

    return 0;
}