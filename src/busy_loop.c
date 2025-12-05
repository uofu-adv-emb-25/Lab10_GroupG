#pragma GCC optimize ("O0")  // disable optimizations for the whole file

#include <stdio.h>
#include "pico/stdlib.h"
#include <pico/sync.h>


void busy_loop(void)
{
    while(1) {
        int k;
        for (int i = 0; i < 30; ++i)
        {
            uint32_t j = 0;
            j = ((~j >> i) + 1) * 27644437;
            k = j;
        }
    }
}

int main(void)
{
    stdio_init_all();
    busy_loop();
}