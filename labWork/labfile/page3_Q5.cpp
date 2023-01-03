// Write a Program to Add, Subtract, and Multiply two matrices of order 2X2 using concepts of Object Oriented Programming.

#include <iostream>
using namespace std;

// Define a class for matrices of size 2x2
class Matrix2x2
{
private:
    int data[2][2];

public:
    // Constructor to initialize the matrix with given values
    Matrix2x2(int a, int b, int c, int d)
    {
        data[0][0] = a;
        data[0][1] = b;
        data[1][0] = c;
        data[1][1] = d;
    }

    // Default constructor to initialize the matrix with zeros
    Matrix2x2()
    {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                data[i][j] = 0;
    }

    // Overloaded + operator to add two matrices
    Matrix2x2 operator+(const Matrix2x2& other)
    {
        Matrix2x2 result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result.data[i][j] = data[i][j] + other.data[i][j];
        return result;
    }

    // Overloaded - operator to subtract two matrices
    Matrix2x2 operator-(const Matrix2x2& other)
    {
        Matrix2x2 result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result.data[i][j] = data[i][j] - other.data[i][j];
        return result;
    }

    // Overloaded * operator to multiply two matrices
    Matrix2x2 operator*(const Matrix2x2& other)
    {
        Matrix2x2 result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                for (int k = 0; k < 2; k++)
                    result.data[i][j] += data[i][k] * other.data[k][j];
        return result;
    }

    // Function to print the matrix
    void print()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }
};

int main()
{
    // Create two matrices
    Matrix2x2 m1(1, 2, 3, 4);
    Matrix2x2 m2(5, 6, 7, 8);

    // Add the two matrices
    Matrix2x2 m3 = m1 + m2;
    cout << "Matrix m3 after m1 + m2:" << endl;
    m3.print();

    // Subtract the two matrices
    Matrix2x2 m4 = m1 - m2;
    cout << "Matrix m3 after m1 + m2:" << endl;
    m4.print();

    // Multiply the two matrices
    Matrix2x2 m5 = m1 * m2;
    cout << "Matrix m3 after m1 * m2:" << endl;
    m5.print();

}