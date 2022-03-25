#include "equation_system.hh"

std::ostream &operator<<(std::ostream &output, const EquationSystem &equation_system)
{
    for (int i = 0; i < SIZE; ++i)
    {
        if (i == (SIZE / 2))
        {
            output << "| " << equation_system[i] << "| * |x_" << i + 1 << "| = | " << equation_system.GetElementB(i) << " |" << std::endl;
        }
        else
        {
            output << "| " << equation_system[i] << "|   |x_" << i + 1 << "|   | " << equation_system.GetElementB(i) << " |" << std::endl;
        }
    }

    return output;
}

std::istream &operator>>(std::istream &input, EquationSystem &equation_system)
{
    Vector tmp;
    double element = 0;

    for (int i = 0; i < SIZE; ++i)
    {
        input >> tmp;
        equation_system[i] = tmp;
    }

    for (int i = 0; i < SIZE; ++i)
    {
        input >> element;
        equation_system.ChangeElementB(element, i);
    }

    return input;
}