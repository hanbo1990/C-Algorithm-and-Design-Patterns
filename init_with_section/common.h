#ifndef COMMON_H
#define COMMON_H

typedef int (*init_fn_t)(void);

#define USED __attribute__((used))
#define SECTION(x) __attribute__((section(x)))

#define INIT_EXPORT(fn, level)  \
    USED const init_fn_t __example_init_##fn SECTION("exi_fn" level) = fn

#define INIT_LEVEL_0_EXPORT(fn) INIT_EXPORT(fn, "0")
#define INIT_LEVEL_1_EXPORT(fn) INIT_EXPORT(fn, "1")

#endif
