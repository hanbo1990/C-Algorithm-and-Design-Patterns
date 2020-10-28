#ifndef PRINT_H
#define PRINT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

#define PRINT(fmt, args...)                                       \
    do {                                                          \
        printf("[%s %d %s]: ", __FILE__, __LINE__, __FUNCTION__); \
        printf(fmt, ##args);                                      \
    } while (0)

#ifdef __cplusplus
}
#endif

#endif /* PRINT_H */
