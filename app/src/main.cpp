// C/C++ Headers

// Other Posix headers

// IDF headers

// Component headers

// Public Headers

// Private Headers
#include "abiotsTestComponent.hpp"

extern "C"
{
    void app_main()
    {
        AbiotsTestComponent test(100);
        test.toString();
    }
}
