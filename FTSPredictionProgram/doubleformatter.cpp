#include "doubleformatter.h"
#include <sstream>
#include <string>
#include <iomanip>

DoubleFormatter::DoubleFormatter() {}

std::string DoubleFormatter::format(double x, int pres) {
    if (x == 0) {
        return "0";
    }
    int64_t deg = 0;
    double x1 = x;
    while (x * 10 < 1 && x * 10 > -1) {
        deg += 1;
        x *= 10;
    }
    x = x1;
    std::stringstream ss;
    ss<<std::fixed<<std::setprecision(pres + deg)<<x;
    std::string res = ss.str();
    while (res.find('.') != std::string::npos && res.find('e') == std::string::npos && res[res.size() - 1] == '0') {
        res = res.substr(0, res.size() - 1);
    }
    if (res[res.size() - 1] == '.') {
        res = res.substr(0, res.size() - 1);
    }
    return res;
}
