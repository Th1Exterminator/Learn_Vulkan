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

    /* Handles */
    GLFWwindow* window;
    VkInstance instance;

    /* methods */
    int initWindow();
    int initVulkan();
    void createInstance();
public:
    vulk_app(std::string _title);
    vulk_app(std::string _title, const int _width, const int _height);
    void vulk_loop();
    ~vulk_app();
};

#endif