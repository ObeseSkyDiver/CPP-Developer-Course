#ifndef ANGRY_CAT_EXCEPTION_HPP
#define ANGRY_CAT_EXCEPTION_HPP

#include <stdexcept>

using namespace std;

class AngryCatException : public runtime_error
{
    public:
        AngryCatException() : runtime_error("You made the cat angry!")
        {
             
        }
        AngryCatException(const string& e) : runtime_error(e)
        {

        }
};

#endif