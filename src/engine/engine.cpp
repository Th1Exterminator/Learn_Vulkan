#include "engine.h"

uint32_t vulk_app::initWindow()
{

}

vulk_app::vulk_app(std::string _title) 
    : title(_title), width(1007), height(641)
{

}

vulk_app::vulk_app(std::string _title, const uint16_t _width, const uint16_t _height) 
    : title(_title), width(_width), height(_height)
{

}

void vulk_app::vulk_loop()
{
    std::cout << title << "\n";
}

vulk_app::~vulk_app()
{
    
}