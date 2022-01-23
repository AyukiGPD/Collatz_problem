#pragma once
#include <iostream>
#include <vector>

using IntType = unsigned long long;

class CollatzProbrem
{
private:
    IntType originValue;
    std::vector<IntType> valueHistory;
public:
    CollatzProbrem(IntType value);

    void Execute();

    IntType Calc(IntType value);
    bool IsOdd(IntType value);
    IntType CalcOdd(IntType value);
    IntType CalcEven(IntType value);
};
