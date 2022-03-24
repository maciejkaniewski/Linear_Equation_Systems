#include "vector.hh"

Vector::Vector()
{
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = 0;
    }
}

Vector Vector::operator+(const Vector &other) const
{
    Vector result;

    for (int i = 0; i < SIZE; i++)
    {
        result[i] = array[i] + other[i];
    }

    return result;
}

Vector Vector::operator-(const Vector &other) const
{
    Vector result;

    for (int i = 0; i < SIZE; i++)
    {
        result[i] = array[i] - other[i];
    }

    return result;
}

Vector Vector::operator/(const double &number) const
{
    Vector result;

    for (int i = 0; i < SIZE; i++)
    {
        result[i] = array[i] / number;
    }

    return result;
}

Vector Vector::operator*(const double &number) const
{
    Vector result;

    for (int i = 0; i < SIZE; i++)
    {
        result[i] = array[i] * number;
    }

    return result;
}

double Vector::operator*(const Vector &other) const
{
    double result = 0;
    double tmp;

    for (int i = 0; i < SIZE; i++)
    {
        tmp = other[i] * array[i];
        result += tmp;
    }

    return result;
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