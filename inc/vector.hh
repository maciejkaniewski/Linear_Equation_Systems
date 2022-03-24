#ifndef VECTOR_HH
#define VECTOR_HH

#define SIZE 3

#include <iostream>

class Vector
{
private:
    double array[SIZE];

public:
    /**
     * @brief Construct vector filled with 0
     *
     */
    Vector();

    /**
     * @brief Access operator
     *
     * @param index
     * @return double
     */
    double operator[](unsigned int index) const { return array[index]; }

    /**
     * @brief Assigment operator
     *
     * @param index
     * @return double&
     */
    double &operator[](unsigned int index) { return array[index]; }

    /**
     * @brief Add two vectors
     *
     * @param other
     * @return Vector
     */
};

/**
 * @brief Display vector
 *
 * @param output stream
 * @param vector
 * @return std::ostream&
 */
std::ostream &operator<<(std::ostream &output, const Vector &vector);

/**
 * @brief Input vector
 *
 * @param input stream
 * @param vector
 * @return std::istream&
 */
std::istream &operator>>(std::istream &input, Vector &vector);

#endif // VECTOR_HH