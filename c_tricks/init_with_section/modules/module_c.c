#include "../common.h"
#include <stdio.h>

static int module_c_init(void)
{
    printf("Hello from module C with init level 1\n");

    return 0;
}

INIT_LEVEL_1_EXPORT(module_c_init);
