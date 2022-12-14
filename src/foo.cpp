#include "bar.hpp"
#include "object.hpp"

int foo(int a, int b)
{
    switch(a+b)
    {
        case 3:
            return bar(Object(a+b));
            break;
        case 4:
            return bar(Object(a-b));
            break;
        default:
            return bar(Object(0));
    }
}