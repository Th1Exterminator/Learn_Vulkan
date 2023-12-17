// Project includes
#include "includes/baseincludes.h"
#include "includes/engine.h"

int main()
{
    std::unique_ptr<vulk_app> v(new vulk_app("Hello world"));

    try
    {
        v->vulk_loop();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}