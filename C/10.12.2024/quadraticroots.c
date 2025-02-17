#include "quadraticroots.h"
#include <math.h>
QuadraticRootsResult findroots(long double a, long double b, long double c) {
    QuadraticRootsResult result;
    long double d = b * b - 4 * a * c;
    if (d < 0) {
        result.nqmarealnikoreni = 1;
    } else {
        result.nqmarealnikoreni = 0;
        result.x1 = (-b + sqrtl(d)) / (2 * a);
        result.x2 = (-b - sqrtl(d)) / (2 * a);
    }
    return result;
}
