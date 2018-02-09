// Assignment3 - Test File 2
// Program to find Deteminant of a matrix
  
void getCofactor(Matrix mat, Matrix temp, int p, int q, int N)
{
    int i = 0, j = 0, row, col;
 
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = mat[row][col];
 
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
float determinantOfMatrix(Matrix mat, int N)
{
    float D = 0.0; // Initialize result
 
    if (N == 1)
        return mat[0][0];
 
    Matrix temp[N][N];
 
    int sign = 1;

    int f;
    for (f = 0; f < N; f++)
    {
        getCofactor(mat, temp, 0, f, N);
        D += sign * mat[0][f] * determinantOfMatrix(temp, N - 1);

        sign = -sign;
    }
    return D;
}
 

void display(Matrix mat, int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printFlt(mat[i][j]);
        printStr("\n");
    }
}
 
