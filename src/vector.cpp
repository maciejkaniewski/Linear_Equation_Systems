#include "vector.hh"

Vector::Vector()
{
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = 0;
    }
}

std::ostream &operator<<(std::ostream &output, const Vector &vector)
{
    for (int i = 0; i < SIZE; i++)
    {
        output << vector[i] << " ";
    }

    return output;
}

std::istream &operator>>(std::istream &input, Vector &vector)
{
    double tmp;
    for (int i = 0; i < SIZE; i++)
    {
        input >> tmp;
        vector[i] = tmp;
    }

    return input;
}