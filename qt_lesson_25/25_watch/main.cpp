#include <iostream>
#include "watch.h"

using namespace std;

int main()
{
    Watch* test = new Watch();
    test->onClicked();

    if (test != NULL)
    {
        delete test;
    }

    return 0;
}
