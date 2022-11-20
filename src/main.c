
#include <stdio.h>
#include "pico/stdlib.h"


int main()
{
    stdio_init_all();

    // Don't yell about this being endless loop
#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
    while(true)
    {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
#pragma clang diagnostic pop
}