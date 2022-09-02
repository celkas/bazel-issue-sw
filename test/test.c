#include <stdio.h>
#include "func.h"

int main(void)
{
    int tmp = -1;

    tmp = func(2);
    if (6 != tmp)
    {
        printf("ERROR! expected 6 but received %d\n!!!", tmp);
    }
    return 0;
}
