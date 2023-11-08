#ifndef WARPDRIVE_HPP
#define WARPDRIVE_HPP

#include <stdexcept>
using namespace std;

class WarpDriveOverheating : public overflow_error
{
    public:
        WarpDriveOverheating() : overflow_error("Warp drive has exceeded safe temperatures!")
        {
            
        }
};


#endif