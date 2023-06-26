#ifndef WATCH_H
#define WATCH_H

#include <iostream>

#include "touchscreen.h"
#include "myinternet.h"
#include "myclass.h"


class Watch
{
public:
    Watch();
    ~Watch();

    void onClicked();

    MyInternet* internet{NULL}; //address
    MyClass* mc{NULL};

private:

};

#endif
