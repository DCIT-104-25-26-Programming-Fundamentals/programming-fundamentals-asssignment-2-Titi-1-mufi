// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 4
// =============================================================================
//
// TASK: Matrix Operations
//
// Write a C++ program that performs three operations on matrices (2D arrays),
// each implemented in its own function.
//
// NOTE: Use a fixed maximum size of 10 for array dimensions.
//       Declare arrays as int matrix[10][10].
//
// -----------------------------------------------------------------------------
// PART A — Transpose a Matrix
// -----------------------------------------------------------------------------
// - Read an M x N matrix from the user.
// - Compute and display its transpose (rows become columns, columns become rows).
//
// Example (2 x 3 input):
//
//   Original Matrix:      Transposed Matrix:
//   1  2  3               1  4
//   4  5  6               2  5
//                         3  6
//
// -----------------------------------------------------------------------------
// PART B — Add Two Matrices
// -----------------------------------------------------------------------------
// - Read two matrices of exactly the same size (M x N).
// - Compute their element-wise sum and display the result.
//
// -----------------------------------------------------------------------------
// PART C — Multiply Two Matrices
// -----------------------------------------------------------------------------
// - Read matrix A of size M x N and matrix B of size N x P.
//   (Number of COLUMNS in A must equal number of ROWS in B.)
// - Compute and display the matrix product A x B (result is M x P).
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT FORMAT
// -----------------------------------------------------------------------------
// The user enters each row's values one at a time:
//
//   Enter number of rows: 2
//   Enter number of columns: 3
//   Enter element [0][0]: 1
//   Enter element [0][1]: 2
//   ...
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Use nested loops for all operations (no external libraries).
// - Each operation must be in its own function (see scaffold below).
// - Display each matrix in a neat, aligned grid using setw().
// - Tip: Complete Part A first, then Parts B and C.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
const int size =10;
//function to display matix
void displayMatrix(int matrix[][SIZE],int rows, cols){
    for (int i = 0; i < rows; i++)
    {
    for (int j = 0; j < cols; j++)
    {
    cout << stew(5) << matrix[i][j];
    }
    cout << end1;
    }
}
//function for transpose
void transposeMatrix(int matrix[][SIZE], int transpose[][SIZE],introws, cols){
    for (int i = 0; i < rows; i++)
    {
    for (int j = 0; j < cols; j++)
    {
    transpose[i][j] = matrix[i][j];
    }
    } 
}
// function for addittion of two matrices
void addmatrices(int A[][SIZE], int B[][SIZE], int sum[][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
       for (int j = 0; j < cols; j++)
       {
       sum[i][j] = A[i][j] + B[i][j]
       }
       
    }
    
}
// function for multiplication of two matrices
void multiplymatrices(int A[][SIZE], int B[][SIZE], int results[][SIZE], introwsA, intcolsA, int colsB)
{
    for (int i = 0; i < rows; i++)
    {
      for (int  j = 0; j < cols; j++)
      {
        results[i][j] = 0;
    for (int  k = 0; k < colsA;k++)
    {
        return[i][j] += A[i][k] *B[k][j];
    }
          }
      
    }
    
}
int main()
{
    int matrix[SIZE][SIZE];
    int transpose[SIZE][SIZE];
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int SUM[SIZE][SIZE];
    int product[SIZE][SIZE];
    int rows, cols;
    // A
    cout << "enter number of row:";
    cin >> rows;
    cout << "enter number of cols:";
    cin >> cols;
    cout <, "enter matrix values:\n";
    for (int  i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
      cout << "element ["<< i <<"]["<< j <<"]: ";
      cin >> matrix[i][j];
      }
    }
    cout << "\noriginal matrix:\n";
    displayMatrix(matrix, rows, cols);

    transposeMatrix(matrix, transpose, rows, cols);
    cout << "\nTransposeMatrix:\n";
    displayMatrix(transpose, row, cols);
   
// B
cout << "\nenter matrix A for addition:\n";
for (int i = 0; i < rows; i++)
{
  for (int j = 0; j < count; j++)
    {
        cout << "enter element [" << i << "][" << j << "]:";
        cin >> matrixA[i][j];
    }
    
}
cout << "\nenter matris B for addition:\n";
for (int  i = 0; i < rows; i++)
{
  for (int  j = 0; j < count; j++)
  {
   cout << "enter element [" << i << "]["<< j <<"]:";
   cin >> matrixB[i][j];
  }
  
}
 addmatrices(matrixA, matrixB, sum, rows, cols);
cout << "\nsum:\n";
displayMatrix(sum, rows, cols);
// C
int rowsA, colsA, rowsB, colsB;
cout << "\n\nC: matrixmultiplication\n";
cout << "enter rows of matrix A:";
cin >> rowsA;
cout << "enter columns of matrix A:";
cin >> colsA;
cout << " enter rows of matrix B:";
cin >> rowsB;
cout << "enter columns of matrix B:";
cin >> colsB;
if (colsA != rowsB)
{
   cout << " matrix multiplication not possible.";
}else {
    cout << "enter matrix A:\n";
    for (int i = 0; i < rowsA; i++)
    {
       for (int j = 0; j < colsA; j++)
       {
       cin >> A[i][j];
       }
       
    }
    cout << "enter matrix B:\n";
    for (int  i = 0; i < rowsB; i++)
    {
       for (int j = 0; j < colsB; j++)
       {
        cin >> B[i][j];
       }
       
    }
   multiplmatrices(A, B, product, rowsA, colsA, colsB);
   cout << "\nproduct matrix:\n";
}
return 0;
}
