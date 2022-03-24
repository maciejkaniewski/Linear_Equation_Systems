#include "matrix.hh"

Matrix::Matrix()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            matrix[i][j] = 0;
        }
    }
}

Vector Matrix::operator*(const Vector &vector) const
{
    double tmp = 0;
    Vector result;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            tmp = matrix[i][j] * vector[j];
            result[i] += tmp;
        }
    }

    return result;
}

std::ostream &operator<<(std::ostream &output, const Matrix &matrix)
{
    for (int i = 0; i < SIZE; i++)
    {
        output << matrix[i] << " "
               << "\n";
    }

    return output;
}

std::istream &operator>>(std::istream &input, Matrix &matrix)
{
    Vector tmp;

    for (int i = 0; i < SIZE; i++)
    {
        input >> tmp;
        matrix[i] = tmp;
    }

    return input;
}