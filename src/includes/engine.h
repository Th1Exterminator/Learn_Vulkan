#ifndef _ENGINE_VULK
#define _ENGINE_VULK
#pragma once

class vulk_app
{
private:
    /* data */
public:
    vulk_app(const char* _title);
    void vulk_loop();
    ~vulk_app();
};

#endif