#include "foo.hpp"
#include "object.hpp"
#include "bar.hpp"

#include <cassert>

int main()
{
    assert(foo(1,2) == 15);
    assert(foo(100,-2) == 0);
}