#ifndef _ENGINE_VULK
#define _ENGINE_VULK
#pragma once

#include "baseincludes.h"

class vulk_app
{
private:
    /* data */
    const std::string title;
    const uint16_t width, height;

    /* methods */
    uint32_t initWindow();
    uint32_t initVulkan();
public:
    vulk_app(std::string _title);
    vulk_app(std::string _title, const uint16_t _width, const uint16_t _height);
    void vulk_loop();
    ~vulk_app();
};

#endif