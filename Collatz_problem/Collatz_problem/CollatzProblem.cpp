#include "CollatzProblem.h"

CollatzProbrem::CollatzProbrem(IntType value)
{
    originValue = value;
}

void CollatzProbrem::Execute()
{
    if (originValue <= 0)
    {
        return;
    }

    std::cout << "Start Collatz problem." << std::endl << "Value = " << originValue << std::endl;

    IntType value = originValue;

    while (true)
    {
        value = Calc(value);
        std::cout << "Calc value = " << value << std::endl;

        if (value == 1)
        {
            std::cout << "Finish!!" << std::endl;
            break;
        }
        else if (value <= 0)
        {
            std::cout << "value error" << std::endl;
            break;
        }
    }
}

IntType CollatzProbrem::Calc(IntType value)
{
    IntType newValue = value;

    if (IsOdd(value))
    {
        newValue = CalcOdd(value);
    }
    else
    {
        newValue = CalcEven(value);
    }

    return newValue;
}

bool CollatzProbrem::IsOdd(IntType value)
{
    IntType odd = value % 2;
    return odd == 1;
}

IntType CollatzProbrem::CalcOdd(IntType value)
{
    return value * 3 + 1;
}

IntType CollatzProbrem::CalcEven(IntType value)
{
    return value / 2;
}
