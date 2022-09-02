#include "func.h"

int func(int par)
{
    int ret = 0;
    switch (par)
    {
    case 1:
        ret = 5;
        break;
    case 2:
        ret = 3 * par;
        break;
    default:
        ret = 7;
        break;
    }
    return ret;
}
