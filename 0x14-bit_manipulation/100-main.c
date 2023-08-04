#include <stdio.h>
#include "main.h"

int main(void)
{
    int m;

    m = get_endianness();
    if (m != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
