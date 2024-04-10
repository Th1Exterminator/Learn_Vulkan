// Project includes
#include "includes/baseincludes.hpp"
#include "includes/engine.hpp"

int main()
{
    std::unique_ptr<vulk_app> v(new vulk_app("Hello world"));

    try
    {
        v->vulk_loop();
    }
    catch(const std::exception& e) // Version
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}