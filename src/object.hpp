#pragma once
#include <iostream>

class Object
{
    public:
    Object(int a)
    {
        if(someLogic(a))
        {
            std::cout << "some logging\n";
            someValue_=(15*a)%2;
        }
        else
        {
            someValue_=a*a;
        }
    }

    int calculate() const
    {
        return 15*someValue_;
    }

    ~Object()
    {
        if(someValue_%2)
        {
            std::cout << "destructed some value which is not even\n";
        }
    }


   private:
    bool someLogic(int a)
    {
        return a%2;
    }

    int someValue_;
};
