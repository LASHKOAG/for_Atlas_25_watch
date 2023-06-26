#include "watch.h"


Watch::Watch()
{
    internet = new MyInternet();
    mc = new MyClass();
}

Watch::~Watch()
{
    if (internet != NULL)
    {
        delete internet;
    }

    if (mc != NULL)
    {
        delete mc;
    }
}





void Watch::onClicked()
{
    internet->ntp();
    mc->get_price();

    int tmp_flag;

    Touchscreen* touchscreen = new Touchscreen();

    tmp_flag = touchscreen->get_time();

    if (touchscreen != NULL)
    {
        delete touchscreen;
    }

    std::cout << tmp_flag << "\n";
}
