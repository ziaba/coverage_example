#include "bar.hpp"
#include "object.hpp"

int bar(const Object& obj)
{
    return obj.calculate();
}