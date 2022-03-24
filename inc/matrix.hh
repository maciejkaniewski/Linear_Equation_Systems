#ifndef MATRIX_HH
#define MATRIX_HH

#include "vector.hh"

/**
 * @brief Model the concept of matrix
 *
 */
class Matrix
{
private:
    Vector matrix[SIZE];

public:
    /**
     * @brief Construct matrix filled with 0
     *
     */
    Matrix();

    /**
     * @brief Access operator
     *
     * @param row
     * @return Vector row of matrix
     */
    Vector operator[](unsigned int row) const { return matrix[row]; }

    /**
     * @brief Assigment operator
     *
     * @param row
     * @return Vector& row of matrix
     */
    Vector &operator[](unsigned int row) { return matrix[row]; }
};

/**
 * @brief Display matrix
 *
 * @param output stream
 * @param matrix
 * @return std::ostream&
 */
std::ostream &operator<<(std::ostream &output, const Matrix &matrix);

/**
 * @brief Input matrix
 *
 * @param input stream
 * @param matrix
 * @return std::istream&
 */
std::istream &operator>>(std::istream &input, Matrix &matrix);

#endif // MATRIX_HH