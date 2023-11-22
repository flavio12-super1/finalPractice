// #ifndef MATRIX_H
// #define MATRIX_H

// #include <iostream>

// struct GenerateMatrix
// {
//     int m;
//     int n;
//     GenerateMatrix(int x, int y)
//     {
//         m = x;
//         n = y;
//     }
// };

// class Matrix
// {
// private:
// public:

//     GenerateMatrix matrix(3, 3);
//     Matrix(){

//     };
// };

// #endif
#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

struct GenerateMatrix
{
    int m;
    int n;
    GenerateMatrix(int x, int y) : m(x), n(y) {}
};

class Matrix
{
private:
    GenerateMatrix dimensions;          // Store the dimensions of the matrix
    std::vector<std::vector<int> > data; // Store the matrix data

public:
    Matrix(const GenerateMatrix &dims) : dimensions(dims)
    {
        // Initialize the matrix with zeros
        data = std::vector<std::vector<int> >(dims.m, std::vector<int>(dims.n, 0));
    }

    // Print the matrix
    void printMatrix() const
    {
        for (int i = 0; i < dimensions.m; ++i)
        {
            for (int j = 0; j < dimensions.n; ++j)
            {
                std::cout << data[i][j] << ' ';
            }
            std::cout << '\n';
        }
    }
};

#endif
