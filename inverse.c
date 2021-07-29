#include <stdio.h>
#include <string.h>
#include "inverse.h"

size_t inverse(char *const str)
{
    char tmp;
    size_t len = strlen(str);

    if (len < 2)
    {
        return 0;
    }

    size_t step = len / 2;
    size_t i = 0;

    for (i = 0; i < step; i++)
    {
        tmp = str[len - 1 - i];
        str[len - 1 - i] = str[i];
        str[i] = tmp;         
    }
    return i;
}
