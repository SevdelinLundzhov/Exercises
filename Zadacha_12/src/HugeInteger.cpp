/*
 * HugeInteger.cpp
 *
 *  Created on: 3.07.2017 ã.
 *      Author: Venci
 */

#include "HugeInteger.h"
#include <iostream>
using namespace std;

HugeInteger::HugeInteger(void)
{
    for (int i = MAXINTEGER - 1; i >= 0; i--)
        this ->hugeIntergerOne[i] = 0;
}

HugeInteger::~HugeInteger()
{

}

void HugeInteger::input(int newArray[MAXINTEGER])
{
    for (int index = MAXINTEGER - 1; index >= 0; index--)
        this->hugeIntergerOne[index] = newArray[index];
}

void HugeInteger::output()
{
    for (int index = 0; index < MAXINTEGER; index++)
        cout << this->hugeIntergerOne[index] << " ";
}

bool HugeInteger::isZero(void)
{
    bool result = true;

    for (int index = MAXINTEGER - 1; index >= 0; index--)
        if (this->hugeIntergerOne[index] != 0)
            result = false;
    return result;
}

bool HugeInteger::isEqual(HugeInteger other)
{
    bool result = true;
    for (int i = 0; i < MAXINTEGER; i++)
        if (this->hugeIntergerOne[i] != other.hugeIntergerOne[i])
            bool result = false;
    return result;
}

bool HugeInteger::isNotEqual(HugeInteger other)
{
    bool result = true;
    for (int index = MAXINTEGER - 1; index >= 0; index--)
        if (this->hugeIntergerOne[index] == other.hugeIntergerOne[index])
            bool result = false;
    return result;
}

bool HugeInteger::isGreaterThan(HugeInteger other)
{
    bool result = false;
    for (int index = MAXINTEGER - 1; index >= 0; index--)
        if (this->hugeIntergerOne[index] > other.hugeIntergerOne[index])
            bool result = true;
    return result;
}

bool HugeInteger::isLessThan(HugeInteger other)
{
    bool result = false;
    for (int index = MAXINTEGER - 1; index >= 0; index--)
        if (this->hugeIntergerOne[index] < other.hugeIntergerOne[index])
            bool result = true;
    return result;
}

bool HugeInteger::isGreaterThanOrEqual(HugeInteger other)
{
    bool result = false;
    for (int index = MAXINTEGER - 1; index >= 0; index--)
        if (this->hugeIntergerOne[index] >= other.hugeIntergerOne[index])
            bool result = true;
    return result;
}

bool HugeInteger::isLessThanOrEqual(HugeInteger other)
{
    bool result = false;
    for (int index = MAXINTEGER - 1; index >= 0; index--)
        if (this->hugeIntergerOne[index] <= other.hugeIntergerOne[index])
            bool result = true;
    return result;
}

HugeInteger HugeInteger::add(HugeInteger other)
{
    HugeInteger result;
    for (int i = 0; i < MAXINTEGER; i++)
    {
        result.hugeIntergerOne[i] = this -> hugeIntergerOne[i] + other.hugeIntergerOne[i];
    }
    return result;
}

HugeInteger HugeInteger::subtract(HugeInteger other)
{
    HugeInteger result;
    for (int i = 0; i < MAXINTEGER; i++)
    {
        result.hugeIntergerOne[i] = this->hugeIntergerOne[i] - other.hugeIntergerOne[i];
    }
    return result;
}

HugeInteger HugeInteger::multiply(HugeInteger other)
{
    HugeInteger result;
    for (int i = 0; i < MAXINTEGER; i++)
    {
        result.hugeIntergerOne[i] = this->hugeIntergerOne[i] * other.hugeIntergerOne[i];
    }
    return result;
}

HugeInteger HugeInteger::divide(HugeInteger other)
{
    HugeInteger result;
    for (int i = 0; i < MAXINTEGER; i++)
    {
        result.hugeIntergerOne[i] = this->hugeIntergerOne[i]/other.hugeIntergerOne[i];
    }
    return result;
}
