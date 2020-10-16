#include "../common.h"
#include <stdio.h>

static int module_a_init(void)
{
    printf("Hello from module A with init level 0\n");

    return 0;
}

INIT_LEVEL_0_EXPORT(module_a_init);
