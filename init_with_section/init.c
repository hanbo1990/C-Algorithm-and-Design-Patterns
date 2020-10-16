#include "common.h"
#include "stdio.h"
#include "init.h"

// extern init_fn_t _exi_start;
// extern init_fn_t _exi_end;

#define START_FUNC_LEVEL(X) __start_exi_fn##X
#define STOP_FUN_LEVEL(X)    __stop_exi_fn##X

extern init_fn_t START_FUNC_LEVEL(0);
extern init_fn_t STOP_FUN_LEVEL(0);
extern init_fn_t START_FUNC_LEVEL(1);
extern init_fn_t STOP_FUN_LEVEL(1);

static int level_0_init(void)
{
    const init_fn_t *fn_ptr;

    for (fn_ptr = &START_FUNC_LEVEL(0); fn_ptr < &STOP_FUN_LEVEL(0); fn_ptr++)
    {
        (*fn_ptr)();
    }

    return 0;
}

static int level_1_init(void)
{
    const init_fn_t *fn_ptr;

    for (fn_ptr = &START_FUNC_LEVEL(1); fn_ptr < &STOP_FUN_LEVEL(1); fn_ptr++)
    {
        (*fn_ptr)();
    }
    
    return 0;
}

void example_init(void)
{
    (void) level_0_init();
    (void) level_1_init();
}
