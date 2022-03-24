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
     * @brief Access selected row from matrix
     *
     * @param row
     * @return Vector
     */
    Vector operator[](unsigned int row) const { return matrix[row]; }

    /**
     * @brief Modify selected row from matrix
     *
     * @param row
     * @return Vector&
     */
    Vector &operator[](unsigned int row) { return matrix[row]; }

    /**
     * @brief Access selected element from matrix
     * 
     * @param row 
     * @param column 
     * @return double 
     */
    double operator()(unsigned int row, unsigned int column) const { return matrix[row][column]; }

    /**
     * @brief Modify selected element form matrix
     * 
     * @param row 
     * @param column 
     * @return double& 
     */
    double &operator()(unsigned int row, unsigned int column) { return matrix[row][column]; }

    /**
     * @brief Multiply matrix by vector
     * 
     * @param vector 
     * @return Vector 
     */
    Vector operator*(const Vector &vector) const;
    
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