/*
 * Blackpyre Engine
 * Copyright (c) 2010 HFLW. All rights reserved.
 * 
 * Source available under the Academic Free License
 * See LICENSE for licensing information
 */

#ifndef WindowFramework_h
#define WindowFramework_h

#include <stdint.h>

class WindowFramework {
    public:
        WindowFramework(int argc = 0, char **argv = 0);
        virtual ~WindowFramework();
        
        virtual int create(char* title);

        static void handleKeypress(unsigned char key, int x, int y);
        virtual uint32_t getTime();
        virtual uint32_t getTimeSinceLast();
    protected:
        uint32_t timeLast;
};

#endif // WindowFramework_h
