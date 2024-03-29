#ifndef DOUBLEFORMATTER_H
#define DOUBLEFORMATTER_H

#include <string>

class DoubleFormatter
{
public:
    DoubleFormatter();

    static std::string format(double x, int pres);
};

#endif // DOUBLEFORMATTER_H
